#include <stdio.h>

int main(){
    int n,n1,sum=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &n1);
        if(n1%5==0)
            sum=sum+n1;
    }
    printf("%d", sum);
    return 0;
}