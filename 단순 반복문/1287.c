#include <stdio.h>

int main(){
    int n,s;
    scanf("%d", &n);
    if(n>=1 && n<=9){
        for(int i=1; i<=9; i++){
            s=i*n;
            for(int i=1; i<=s; i++)
                printf("*");
            printf("\n");
        }
    }
}