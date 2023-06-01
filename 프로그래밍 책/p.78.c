#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int a,b,num;
    int result=0;
	srand (time(NULL));
	//srand()를 통해 매번 동일한 난수를 발생시키지 못하게 함
	printf("***번호 뽑기 프로그램***\n");
	printf("번호의 범위를 입력하세요(시작번호, 마지막번호) : ");
	scanf("%d %d", &a, &b);
	result=rand()%(b-num+1)+a;
	//rand()는 0부터 32767 사이의 무작위 수를 발생시키는 함수
	printf("");
}