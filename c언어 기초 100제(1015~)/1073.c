#include <stdio.h>

int main(){
	int n;
	while(1){ //참이기 때문에 밑에 출력
		scanf("%d", &n);
		if(n==0) break;
		printf("%d\n", n);
	}
	return 0;
}
