#include <stdio.h>

float calculateMedia(float x, float y) {
  float resultado = (x + y)/2;
  return resultado;
}

int main () {
	float a, b, resultado;

  scanf("%f %f", &a, &b);

  resultado = calculateMedia(a, b);

  printf("%.1f", resultado);
      
  return 0; 
}

