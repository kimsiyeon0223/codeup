/*점수(정수, 0 ~ 100)를 입력받아 평가를 출력해보자.*/
#include <stdio.h>

int main(void)
{
    int a;
    scanf("%d", &a);
    if(a >= 90)
    {
    printf("A");
    }
    else if(a >= 70)
    {
    printf("B");
    }
    else if(a >= 40)
    {
    printf("C");
    }
    else if(a >= 0)
    {
    printf("D");
    }
    
    return 0;
}
