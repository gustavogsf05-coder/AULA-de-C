#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,b,m;

	printf("a:");
	scanf("%d", &a);
	
	printf("b:");
	scanf("%d", &b);
	
	m=a;
	a=b;
	b=m;
	
	printf("saidas a = %d, b = %d\n", a,b);
	
	system("pause");	
	return 0;
}
