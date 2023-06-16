#include <stdio.h>
int result=0;
void f(int k){
    if(k==0) 
        return;
    f(k-1);
    result = result + k;
}

int main(){
    int n;
    scanf("%d", &n);
    f(n);
    printf("%d", result);
    return 0;
}