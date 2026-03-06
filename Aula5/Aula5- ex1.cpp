#include <stdio.h>

int main(){

    int cont = 0;
    float num, soma = 0;

    while(cont < 5){
        printf("Digite um numero: ");
        scanf("%f", &num);

        soma = soma + num;
        cont++;

    }
    soma = soma / 5;
    printf("Media = %.2f\n", soma);
    return 0;
}
