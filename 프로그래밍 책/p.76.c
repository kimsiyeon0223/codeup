#include <stdio.h>

int main(){
	double a,b,c;
	int d,e,f;
	double score;
	printf("***과목별 점수 계산 프로그램***\n");
	printf("중간고사 반영 비율/받은 점수를 입력하세요 : ");
	scanf("%lf %d", &a, &d);
	printf("기말고사 반영 비율/받은 점수를 입력하세요 : ");
	scanf("%lf %d", &b, &e);
	printf("수행평가 반영 비율/받은 점수를 입력하세요 : ");
	scanf("%lf %d", &c, &f);
	score=(a*d)+(b*e)+(c*f);
	printf("점수는 %.1f입니다.", score);
} 