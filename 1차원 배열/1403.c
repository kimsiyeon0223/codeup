#include <stdio.h>

int main(){
    int k;
    int arr[100]={};
    scanf("%d", &k);
    for(int i=1; i<=k; i++)
        scanf("%d", &arr[i]);

    for(int i=1; i<=2; i++){
        for(int j=1; j<=k; j++)
            printf("%d\n", arr[j]);
    }
    return 0;
}