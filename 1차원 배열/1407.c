#include <stdio.h>

int main(){
    char str[100];
    gets(str);

    for(int i=0; str[i]!='\0'; i++){ // '\0' 은 문자열의 끝을 나타낸다.
        if(str[i]!=' ') printf("%c", str[i]);
    }
}

/*
    gets 함수와 scanf 함수는 둘 다 입력을 목적으로 하는 함수이다.
    scanf 함수는 입력에 공백을 받지 않지만 gets 함수는 공백까지 포함하여 입력받는다.
*/