#include <stdio.h>
#include <string.h>

// Slide 06, Questão 3

int main(){

int i;
char texto[26];
int vogal;

vogal = 0;

printf("Digite um texto: \n");
  gets(texto);

for (i = 0; i < strlen(texto); i++){


 if (texto[i] == 'A' || texto[i] == 'E' || texto[i] == 'I' || texto[i] == 'O' || texto[i] == 'U' || texto[i] == 'a' || texto[i] == 'e' || texto[i] == 'i' || texto[i] == 'o' || texto[i] == 'u'){

    vogal++;

 }

}
printf("Vogais = %d", vogal);





return 0;
}
