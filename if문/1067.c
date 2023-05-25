/*정수 1개가 입력되었을 때, 음(minus)/양(plus)과 짝(even)/홀(odd)을 출력해보자.*/
#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    if(a>0){
        if(a%2==0){
            printf("plus\neven");
        }else{
            printf("plus\nodd");
        }
    }
    else{
        if(a%2==0){
            printf("minus\neven");
        }else{
            printf("minus\nodd");
        }
    }
    return 0;
}
