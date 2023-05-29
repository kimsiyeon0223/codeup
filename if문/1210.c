#include <stdio.h>

int main(){
    int num1,num2,cal1, cal2;
    scanf("%d %d", &num1, &num2);

    if(num1==1)
        cal1=400;
    else if(num1==2)
        cal1=340;
    else if(num1==3)
        cal1=170;
    else if(num1==4)
        cal1=100;
    else if(num1==5)
        cal1=70;

    if(num2==1)
        cal2=400;
    else if(num2==2)
        cal2=340;
    else if(num2==3)
        cal2=170;
    else if(num2==4)
        cal2=100;
    else if(num2==5)
        cal2=70;

    if(cal1+cal2>500)
        printf("angry");
    else
        printf("no angry");

    return 0;
}