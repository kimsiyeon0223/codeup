#include <stdio.h>

int main(){
	int t1,t2,t3;
	int car=170;
	scanf("%d %d %d", &t1, &t2, &t3);
	if(car>=t1)
		printf("충돌 %d", t1);
	else if(car>=t2)
		printf("충돌 %d", t2);
	else if(car>=t3)
		printf("충돌 %d", t3);
	else
		printf("무사통과"); 
}