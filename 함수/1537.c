#include <stdio.h>

int n;

void f(int n){
    if(n==1) printf("hello\n");
    else if(n==2) printf("world\n");
}

int main(){
    scanf("%d", &n);
    f(n);
    return 0;
}