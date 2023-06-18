#include <stdio.h>

int main(){
    int arr[11]={};
    int k;
    for(int i=1; i<=10; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);
    printf("%d", arr[k-1]);
    return 0;
}