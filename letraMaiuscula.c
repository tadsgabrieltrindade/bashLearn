#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>

int main (){
    setlocale(LC_ALL, "Portuguese");
    char c;

    printf("Digite uma o letra em minúsculo para trasformarmos em maiúsculas: \n>>> ");
    scanf("%c", &c);

     if (c>= 'a') {
        printf("Segue a letra escrita em maiúscula: > %c < \n", toupper( c ));
     }
     else {
        printf("Caractere inválido.");
     }
     system("\npause");
        return 0;
}
