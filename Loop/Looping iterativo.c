#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int I = 1; // I � uma vari�vel de controle
    int N, R;

    printf("Digite um n�mero para ser multiplicado por 3 e apresentado 5 vezes: \n>>> ");
    scanf("%i", &N);

        while(I<=5){
            R = (N*3);
            printf("\n O resultado � %i.\n", R);
            I = I+1;
        }

return 0;
}
