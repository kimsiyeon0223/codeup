#include <stdio.h>

int n;

int f(int k){
    if(k==1 || k==2)
        return 1;
    return f((k-2)+(k-1));
}

int main(){
    scanf("%d", &n);
    printf("%d", f(n));
}