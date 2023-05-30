#include <stdio.h>

int main(){
    int n1,n2,sum=0;
    scanf("%d", &n1);
    for(int i=0; i<n1; i++){
        scanf("%d", &n2);
        sum=sum+n2;
    }
    printf("%d", sum);
    return 0;
}