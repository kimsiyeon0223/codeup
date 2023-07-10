#include <stdio.h>

long long int n;

long long int sqrt(long long int n){
    long long int temp = 0;
    for(long long int i=0; i<=n; i++){
        if(i*i>n) break;
        else temp=i;
    }
    return temp;
}

int main(){
    scanf("%lld", &n);
    printf("%d\n", sqrt(n));
    return 0;
}