/*이번 기말고사에서는 정보와 수학 두 과목의 시험이 실시되었다.
우리 반에 있는 모든 학생들의 학번과 성적을 입력 받아 합계, 평균을 출력하시오.*/

#include <stdio.h>

typedef struct STUDENT{
	int no;  // 학생번호
	int inf; //정보점수
	int mat; //수학점수
	int sum; //점수합계
	double avg; //점수 평균
}student;

int main(){
	int n;
	scanf("%d", &n);
	student a[100];
	for(int i=1; i<=n; i++){
		scanf("%d %d %d", &a[i].no, &a[i].inf, &a[i].mat);
		a[i].sum=a[i].inf+a[i].mat;
		a[i].avg=(float)a[i].sum/2;
	}
	for(int i=1; i<=n; i++){
		printf("%d %d %.1f\n", a[i].no, a[i].sum, a[i].avg);
	}
	
}