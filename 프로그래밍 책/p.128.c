#include <stdio.h>

int main(){
	int score[5];
	int max=0;
	for(int i=0; i<5; i++){
		printf("%d번 학생의 프로그래밍 성적을 입력하세요", i+1);
		scanf("%d", &score[i]);
	}
	for(int i=0; i<5; i++){
		if(max<score[i])
			max=score[i];
	}
	printf("최고 점수 : %d\n", max);
}