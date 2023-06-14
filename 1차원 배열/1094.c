#include <stdio.h>

int main(){
    int n;
    int arr[10000]={};
    scanf("%d", &n); //개수 입력받기
    for(int i=1; i<=n; i++) //개수만큼 입력 받기
        scanf("%d ", &arr[i]); //읽어서 순서대로 배열에 넣음

    for(int j=n; j>=1; j--)
        printf("%d ", arr[j]);
    return 0;
}