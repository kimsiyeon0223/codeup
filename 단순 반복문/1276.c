#include <stdio.h>

int main(){
    int n;
    int result=1; 
    scanf("%d", &n);
    for(int i=1; i<=n; i++){ 
        result=result*i;
    }
    printf("%d", result);
    return 0;
}

//곱할때 0이 있으면 무조건 값은 0이 된다.