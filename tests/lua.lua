-- Configurações iniciais
local GRID_SIZE = 10
local ROWS = 29
local COLUMNS = 39
local START_X = 400
local START_Y = 300
local MOVE_INTERVAL = 170

-- Variáveis ​​globais
local snake = {}
local direction = "right"
local snake_timer = nil
local food = {}

-- Funções Auxiliares
local function spawnFood()
    local x = math.random(COLUMNS) * GRID_SIZE
    local y = math.random(ROWS) * GRID_SIZE
    food = {x = x, y = y}
    local object = createObject(2004, x, y, 1)
end


-- Funções para o jogo
function startGame() 
    -- Desova a cobra 
    local head = createObject(2003, START_X, START_Y, 1) 
    table.insert(snake, head) 
    for i = 1, 2 do 
        local body_part = createObject(2003, START_X - (iGRID_SIZE), START_Y, 1) 
        table.insert(snake, body_part) 
    end 
    -- Desova a comida 
    spawnFood() 
    setTimer(moveSnake, MOVE_INTERVAL, 0) 
end 

function moveSnake() 
    local head_x, head_y, head_z = getElementPosition(snake[1]) 
    local tail = table.remove(snake) 
    local tail_x, tail_y, tail_z = getElementPosition(tail) 

    -- Movendo a cobra de acordo com a direção 
    if direction == "up" then
        new_part = createObject(2003, head_x, head_y - GRID_SIZE, head_z)
    elseif direction == "down" then
        new_part = createObject(2003, head_x, head_y + GRID_SIZE, head_z)
    elseif direction == "left" then
        new_part = createObject(2003, head_x - GRID_SIZE, head_y, head_z)
    elseif direction == "right" then
        new_part = createObject(2003, head_x + GRID_SIZE, head_y, head_z)
    end

    table.insert(snake, 1, new_part)
    attachElements(new_part, nil, tail_x, tail_y, tail_z)
    
    -- Verifique se a cobra bateu na borda da tela 
    if head_x < GRID_SIZE or head_x > (COLUMNS-1) GRID_SIZE or head_y < GRID_SIZE or head_y > (ROWS-1) * GRID_SIZE then 
        killTimer(snake_timer) 
        outputChatBox("Game over! You hit the wall!", 255, 0, 0) 
        return 
    end 

    -- Verifique se a cobra comeu a comida 
    if head_x == food.x and head_y == food.y then
        setElementPosition(food.object, -1000, -1000, -1000)
        spawnFood()
        local tail_x, tail_y, tail_z = getElementPosition(snake[#snake])
        local new_part = createObject(2003, tail_x, tail_y, tail_z)
        table.insert(snake, new_part)
    end

    -- Verifica se a cobra bateu em si mesma 
    for i = 3, #snake do 
        if getElementPosition(snake[i]) == getElementPosition(snake[1]) then 
            killTimer(snake_timer) 
            outputChatBox("Game over! You hit your own tail!", 255, 0, 0) 
            return 
        end 
    end 
end 

function onPlayerJoin()
    outputChatBox("Welcome to the Snake game!", 255, 255, 255)
    startGame()
end

function onPlayerMove(player, key, state)
    -- Detecta a direção do player
    if key == "arrow_u" then
        direction = "up"
    elseif key == "arrow_d" then
        direction = "down"
    elseif key == "arrow_l" then
        direction = "left"
    elseif key == "arrow_r" then
        direction = "right"
    end
end

function resetGame()
    for i, val in ipairs(snake) do
        destroyElement(val)
    end
    snake = {}
    direction = "right"
    killTimer(snake_timer)
end

function onPlayerQuit()
    resetGame()
end

addEventHandler("onResourceStart", resourceRoot, startGame)
addEventHandler("onPlayerJoin", root, onPlayerJoin)
addEventHandler("onPlayerQuit", root, onPlayerQuit)
addEventHandler("eu", root, resetGame)
addEventHandler("onClientKey", root, onPlayerMove)

function destroyFood()
    setElementPosition(food.object, -1000, -1000, -1000)
end

function clearGame()
    resetGame()
    destroyFood()
end

function onResourceStop()
    clearGame()
end

addEventHandler("onResourceStop", resourceRoot, onResourceStop)