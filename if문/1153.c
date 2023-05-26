#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);

    if(a>b)
        printf(">");
    else if(b>a)
        printf("<");
    else if(a==b)
        printf("=");

    return 0;
}