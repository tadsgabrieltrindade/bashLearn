#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>

int main (){
    setlocale(LC_ALL, "Portuguese");
    char c;

    printf("Digite uma o letra em min�sculo para trasformarmos em mai�sculas: \n>>> ");
    scanf("%c", &c);

     if (c>= 'a') {
        printf("Segue a letra escrita em mai�scula: > %c < \n", toupper( c ));
     }
     else {
        printf("Caractere inv�lido.");
     }
     system("\npause");
        return 0;
}
