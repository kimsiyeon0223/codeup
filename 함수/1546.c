#include <stdio.h>

int n;

#include <stdbool.h>
bool zero(int n){
    return !n;
}

bool plus(int n){
    return n>0;
}

int main(){
    scanf("%d", &n);
    if(zero(n)) printf("zero");
    else printf("%s", plus(n)?"plus":"minus");
    return 0;
}