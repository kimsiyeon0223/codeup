#include <stdio.h>

int main(){
	int a, b=0;
	scanf("%d", &a);
	for(int i=0;i<=a;i++){
		b+=i;
		if(b>=a){
			printf("%d", i);
			break;
		}
	}
	return 0;
}
