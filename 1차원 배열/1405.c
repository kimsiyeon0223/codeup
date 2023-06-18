#include <stdio.h>

int main(){
    int arr[1000]={};
    int k, t=0;
    scanf("%d", &k);
    for(int i=1; i<=k; i++){
        scanf("%d", arr[i]);
    }
    
    for(int i=1; i<=k; i++){
        for(int j=1; j<=k; j++)
            printf("%d", arr[j]);
        printf("\n");
        t=arr[0];
        for(int n=1; n<=k; n++)
            arr[n]=arr[n+1];
        arr[k-1]=t;
    }
}