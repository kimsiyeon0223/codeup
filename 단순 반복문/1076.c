#include <stdio.h>

int main()
{
	char x,t='a';
	scanf("%c", &x);
	while(1)
	{
		printf("%c ", t);
		if(t==x)break;
		t=t+1;
	}
	return 0;
}
