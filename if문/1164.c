#include <stdio.h>

int main(){
    int car = 170;
    int t1, t2, t3;
    scanf("%d %d %d", &t1, &t2, &t3);

    if(t1<=car || t2<=car || t3<=car)
        printf("CRASH");
    else
        printf("PASS");

    return 0;
}