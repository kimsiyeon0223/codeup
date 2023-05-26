#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);

    if(a<10)
        printf("small");
    else if(a>=10)
        printf("big");

    return 0;
}