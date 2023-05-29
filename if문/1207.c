#include <stdio.h>

int main(){
    int a,b,c,d;
    scanf("%d %d %d %d",&a, &b, &c, &d);
    int state=a+b+c+d;

    if(state == 1)
        printf("도");
    else if(state == 2)
        printf("개");
    else if(state == 3)
        printf("걸");    
    else if(state == 4)
        printf("윷");
    else if(state == 0)
        printf("모");

    return 0;
}