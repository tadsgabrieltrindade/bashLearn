#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>

int main (){
    setlocale(LC_ALL, "Portuguese");
    int a;

    printf("Digite um n�mero diferente de 5: ");
    scanf("%i", &a);

     if (a!=5) {
        printf("\nSeu n�mero realmente � TRUE, %i.", a);
        printf("\n%i", a==5);
     }
     else {
        printf("\nVoc� digitou o n�meor 5, FALSE!!!");
        printf("\n%i", a==5);
     }
     system("\npause");
        return 0;
}
