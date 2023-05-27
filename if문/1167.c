#include <stdio.h>

int main(){
    int num1, num2, num3;
    int result=0;
    scanf("%d %d %d", &num1, &num2, &num3);

    if(num1<=num2 && num1<=num3){
        if(num2<=num3)
            result=num2;
        else
            result=num3;
    }
    else if(num2<=num1 && num2<=num3){
        if(num1<=num3)
            result=num1;
        else
            result=num3;
    }
    else if(num3<=num1 && num3<=num2){
        if(num1<=num2)
            result=num1;
        else
            result=num2;
    }

    printf("%d", result);
    return 0;
}