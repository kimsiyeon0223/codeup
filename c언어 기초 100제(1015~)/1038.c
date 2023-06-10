#include <stdio.h>

int main(){
    long long int n1, n2; //int 범위를 넘어가는지 잘 생각해봐야한다. 를 고려해 long long int로 자료형 선언
    scanf("%lld %lld", &n1, &n2); //long long int의 경우 서식문자는 %lld를 사용
    printf("%lld", n1+n2);
    return 0;
}