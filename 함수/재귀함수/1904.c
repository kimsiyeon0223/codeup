#include <stdio.h>

void f(int fn, int ln){
    if(fn>ln){
        return;
    }else{
        if(fn%2!=0){
            printf("%d ", fn);
        }
        f(fn+1, ln);
    }
}

int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    f(a,b);
    return 0;
}