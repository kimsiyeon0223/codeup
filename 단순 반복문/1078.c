#include <stdio.h>
int main(){
	int a, n=0;
	scanf("%d", &a);
	for(int i=2;i<=a;i+=2){
		n+=i;
	}
	printf("%d",n);
	return 0;
}
