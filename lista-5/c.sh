#!/bin/bash

if [ $# -eq 0 ]; then
  echo "Nenhum arquivo foi passado como argumento"
  exit 1
fi

filename=$(basename -- "$1")
filename="${filename%.*}"~

echo "-------------------- COMPILADOR DUTRA --------------------"

echo "[1] Compilando o arquivo $filename utilizando GCC..."

gcc -Wall -Wextra -o "$filename" "$1"

if [ $? -ne 0 ]; then
  echo "Erro ao compilar o arquivo $1"
  exit 1
fi

echo "[2] Executando arquivo..."
echo "----------------------- EXECUTANDO -----------------------"

./"$filename"

if [ $? -ne 0 ]; then
  echo "Erro ao executar o arquivo $filename"
  exit 1
fi

rm "$filename"