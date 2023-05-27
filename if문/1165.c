#include <stdio.h>

int main(){
    int t, s;
    scanf("%d %d", &t, &s);
    t=90-t;
    if(t==0){
        printf("%d", s);
    }
    else{
        s=s+1;
        if(t>=5){
            s=s+(t-1)/5;
        }
        printf("%d", s);
    }

    return 0;
}