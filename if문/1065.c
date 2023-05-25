/*세 정수 a, b, c가 입력되었을 때, 짝수만 출력해보자*/
#include <stdio.h>

int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c); //정수 입력받기
	if(a % 2 == 0)
	{
		printf("%d\n", a);
	}

	if(b % 2 == 0){
		printf("%d\n", b);
	}

	if(c % 2 == 0){
		printf("%d\n", c);
	}

	return 0;
}
