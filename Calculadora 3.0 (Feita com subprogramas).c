#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>

void rotSoma (){
    setlocale(LC_ALL, "Portuguese");
    float num1, num2, result;
    for(int i = 0; i <=70; i++)
        printf("-");
    printf("\n \nDigite o primeiro valor: \n >>>"); scanf("%f", &num1);
    printf("\nDigite o segundo valor: \n >>>"); scanf("%f", &num2);
    result = num1 + num2;
    printf("\nA soma entre os valores digitados � %.1f.\n", result);
}

void rotSubtracao(){
    setlocale(LC_ALL, "Portuguese");
    float num1, num2, result;
    for(int i = 0; i <=70; i++)
        printf("-");
    printf("\n \nDigite o primeiro valor: \n >>>"); scanf("%f", &num1);
    printf("\nDigite o segundo valor: \n >>>"); scanf("%f", &num2);
    result = num1 - num2;
    printf("\nA subtra��o entre os valores digitados � %.1f.\n", result);
}

void rotProduto(){
    setlocale(LC_ALL, "Portuguese");
    float num1, num2, result;
    for(int i = 0; i <=70; i++)
        printf("-");
    printf("\n \nDigite o primeiro valor: \n >>>"); scanf("%f", &num1);
    printf("\nDigite o segundo valor: \n >>>"); scanf("%f", &num2);
    result = num1 * num2;
    printf("\O produto entre os valores digitados � %.1f.\n", result);
}
void rotdivisao(){
    setlocale(LC_ALL, "Portuguese");
    float num1, num2, result;
    for(int i = 0; i <=70; i++)
        printf("-");
    printf("\n \nDigite o primeiro valor: \n >>>"); scanf("%f", &num1);
    printf("\nDigite o segundo valor: \n >>>"); scanf("%f", &num2);
    if(num2 != 0){
    result = num1 / num2;
    printf("\nA divis�o entre os valores digitados � %.1f.\n", result);
    }else
        printf("\n>>>Erro! Denominador igual a zero.<<<\n");
}
int main (){
    setlocale(LC_ALL, "Portuguese");
    int op = 0;
    while(op != 5){
        printf("\n1 - Adi��o\n");
        printf("\n2 - Subtra��o\n");
        printf("\n3 - Multiplica��o\n");
        printf("\n4 - Divis�o\n");
        printf("\n5 - Sair do programa\n");
        printf("\nDigite a op��o desejada: ");
        scanf("%i", &op);
        if(op != 5){
        switch (op){
            case (1):
                rotSoma();
                system("\npause\n"); system("cls");
                break;
            case(2):
                rotSubtracao();
                system("\npause\n"); system("cls");
                break;
            case(3):
                rotProduto();
                system("\npause\n"); system("cls");
                break;
            case(4):
                rotdivisao();
                system("\npause\n"); system("cls");
                break;
            default:
                system("cls\n");
                printf("\n \t\t>>>Op��o inv�lida! Por favor, digite um op��o v�lida.<<<\n");
            }
        }


    }
system("\npause\n");

return 0;
}
