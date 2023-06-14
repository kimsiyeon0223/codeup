#include <stdio.h>

int main(){
    int n, min=24;
    int arr[10000]={};
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        scanf("%d ", &arr[i]);
        if(min>arr[i]){
            min=arr[i];
        }
    }
    printf("%d", min);
    return 0;
}