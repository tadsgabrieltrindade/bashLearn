#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float A, B, C;
printf("\t\t\t\t\t Identificador de tr�ngulo \n\n");

    printf("Qual � o valor do lado A do tri�ngulo? ");
    scanf("%f", &A);

    printf("\nQual � o valor do lado B do tri�ngulo? ");
    scanf("%f", &B);

    printf("\nQual � o valor do lado C do tri�ngulo? ");
    scanf("%f", &C);

        if ((A<B+C)&&(B<A+C)&&(C<A+B)){
            if ((A==B) && (B==C)){
                printf("\n\tOs valores remetem a um tri�ngulo equil�tero.\n");
            }else{
                if ((A==B)||(A==C)||(C==B)){
                    printf("\tOs valores remetem a um tri�ngulo is�sceles.\n");
                }else{
                    printf("\tOs valores remetem a um tri�ngulo escaleno.\n");
                }
            }
        }else{
            printf("\tOs valores indica que o tamanho dos lados n�o configuram um tri�ngulo. \n");
        }

printf("\t\t\t\t\t\t\t\t Gabriel Trindade \n \t\t\t\t\t\t\t Copyright � Todos os direitos s�o reservados. \n ");
    system("\n pause");
return 0;
}
