#include <stdio.h>

int main()
{
	char x,t;
	while(1)
	{
		scanf("%c ", &x);
		printf("%c\n", x); 
		if(x=='q')break;
		//x가 q이면 그만 탈출
	}
	return 0;
}
