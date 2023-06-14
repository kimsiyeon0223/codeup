#include <stdio.h>

int main(){
    int input, n; 
    int arr[24]={};
    scanf("%d", &input);
    for(int i=1; i<=input; i++){
        scanf("%d ", &n);
        arr[n]++;
    }
    for(int i=1; i<=23; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}