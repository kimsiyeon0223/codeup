#include <stdio.h>

int main(){
    int num1;
    while (1)
    {
        scanf("%d", &num1);
        if(num1==0)break;
        printf("%d\n", num1);
    }
    return 0;
}