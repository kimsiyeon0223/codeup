#include <stdio.h>

int n;

int f(int  k){
    if(k==0)
        return;
    f(k/2); //k값에서 2를 나눈 값을 불러냄
    if(k%2==1)
        printf("1");
    else if(k%2==0)
        printf("0");
}

int main(){
    scanf("%d", &n);
    if(n==0) //입력받은 값이 0이면 0출력
        printf("0");
    f(n);
}