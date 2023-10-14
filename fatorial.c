#include <stdio.h>

// Slide 05, Questão 3

int fat, n;

int main()
{

printf("Digite um numero: ");
scanf("%d", &n) ;

for(fat = 1; n > 1; n = n - 1)
  {
    fat = fat * n;
  }

  printf("Fatorial = %d", fat);



  return 0;
}
