#include <stdio.h>

int main(){
    float f; //float : 실수
    scanf("%f", &f); 
    printf("%.2f", f); //%.2f와 같은 형식 : 소수점 이하 넷 째 자리에서 반올림하여 소수점 이하 셋 째 자리까지 출력하라는 의미
    return 0;
}