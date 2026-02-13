#include <stdio.h>
#include <stdlib.h>

int main()
{
	float alt, pe_tt;
	printf("altura:");
	scanf("%f", &alt);
	pe_tt=(72.7*alt)-58 ;
	
	printf("ttl: %.2f", pe_tt);
	
	system("pause");	
	return 0;
}
