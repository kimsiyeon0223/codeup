#include <stdio.h>

int main(){
	int year, month, day,res;
	printf("당신의 사주를 봐드립니다\n연도,월,일을 차례로 입력하세요 : ");
	scanf("%d %d %d", &year, &month, &day);
	res=(year-month+day)%10;
	if(res==0)
		printf("당신의 사주는 대박입니다.\n");
	else
		printf("당신의 사주는 그럭저럭 입니다.\n");
}