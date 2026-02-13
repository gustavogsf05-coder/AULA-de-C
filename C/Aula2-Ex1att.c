#include <stdio.h>
#include <stdlib.h>

int main()
{
	float num1,num2,soma;
	printf("numero 1: ");
	scanf("%f", &num1);
	
	
	printf("numero 2: ");
	scanf("%f", &num2);
	
	soma = num1+num2;
	
	printf("resultado: %.2f\n", soma);
	
	system("pause");	
	return 0;
}
