#include <stdio.h>

int main(){
	int a=100;
	int *b;
	b=&a;
	*b=*b+20;
	printf("%d %d", a, *b); // 120 120
	
	return 0;
}