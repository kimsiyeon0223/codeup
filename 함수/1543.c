#include <stdio.h>

int n;

int f(int n){
    for(int i=1; i<=n; i++){
        printf("love\n");
    }
}

int main(){
    scanf("%d", &n);
    f(n);
    return 0;
}