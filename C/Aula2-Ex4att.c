#include <stdio.h>
#include <stdlib.h>

int main()
{
	int dia;
	float km, tt_vl;
	
	printf("kms:");
	scanf("%f", &km);
	
	printf("dia:");
	scanf("%d", &dia);
	
	tt_vl =(dia*60)+(km*0.15);

	printf("total: %.2f \n", tt_vl);
	
	system("pause");	
	return 0;
}
