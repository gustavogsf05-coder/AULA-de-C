#include <stdio.h>
#include <stdlib.h>

int main (){

    int n=0;
    while(n<=100){
        if (n<=51){
            printf("%d\n", n);
            n = n + 1;
        }
        else if (n >= 52){
            printf("%d\n", n);
            n = n + 2;
        }
    }

    system("pause");
    return 0;
}
