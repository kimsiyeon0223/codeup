#include <stdio.h>

int main(){
    int n,r=0;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        if(i%2==0)
            r=r+i;
    }
    printf("%d", r);
    return 0;
}