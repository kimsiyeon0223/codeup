#include <stdio.h>

int main(){
    int a,b,r=0;
    scanf("%d %d", &a, &b);
    if(a<=b){
        for(int i=a; i<=b; i++){
            if(i%3==0)
                r=r+i;
        }
    }
    printf("%d", r);
}