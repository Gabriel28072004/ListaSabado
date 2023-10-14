#include <stdio.h>

//Slide 05, Questão 2

int main(){

 int N, i;
 float media, valores, soma;

 printf("Quantos valores vai digitar? ");
  scanf("%d", &N);
  soma = 0;
for(i = 0; i < N; i++){

 printf("Digite os numeros: ");
  scanf("%f", &valores);

 soma = valores + soma;
}

media = soma / N;

printf("Media = %f", media);















return 0;
}
