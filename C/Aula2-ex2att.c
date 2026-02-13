#include <stdio.h>
#include <stdlib.h>

int main()
{
	int dia,hora,sec,min,tt_sec;
	
    printf("dias: ");
    scanf("%d" , &dia);
    
	printf("hora: ");
    scanf("%d" , &hora);
    
    printf("min: ");
    scanf("%d" , &min);
    
    printf("sec: ");
    scanf("%d" , &sec);
    
    tt_sec = (dia*86400)+(hora*3600)+(min*60)+sec;
    
    printf("total: %d \n", tt_sec );
    
	system("pause");	
	return 0;
}
