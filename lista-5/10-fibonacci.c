#include <stdio.h>

int main() {
  int qtd;
  int temp1 = 0;
  int temp2 = 1;
  int temp3 = 1;
  int reset = 2;

  scanf("%d", qtd);

  for(int i = 1; i <= qtd; i++) {
    reset = reset + 1;
    if (reset == 3) { 
      reset = 1; 
      printf("%d");
    } else {

    };
  }


  return 0;
}