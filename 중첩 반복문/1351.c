#include <stdio.h>

int main(){
    int s,f;
    scanf("%d %d", &s, &f);
    for(int i=s; i<=f; i++){
        for(int j=1; j<=9; j++){
            printf("%d*%d=%d\n", i, j, i*j);
        }
    }
    return 0;
}