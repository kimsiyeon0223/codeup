#include <stdio.h>

int main(){
    int n, m;
    scanf("%d", &n);
    for(;;){
        scanf("%d", &m);
        printf("%d\n", m);
        n=n-1;
        if(n==0) break;
    }
    return 0;
}