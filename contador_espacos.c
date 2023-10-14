#include <stdio.h>
#include <string.h>

// Slide 06, Questão 1

int main(){

 char texto[12];
 int ContadorEspacos;
 int i;

printf("Digite um texto: ");
 gets(texto);


ContadorEspacos = 0;

for (i=0; i < strlen(texto); i++) {
        if (texto[i] == ' ') {
            ContadorEspacos++;
        }

}

 printf("A quantidade de espacos e de: %d", ContadorEspacos);










return 0;
}
