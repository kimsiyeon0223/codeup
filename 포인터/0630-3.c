/*포인터를 사용하여 어떤 문자열에서 부분문자열을 추출하여 출력하는 프로그램을 작성하시오.*/

#include <stdio.h>

int main(){
	char a[100];
	int num1, num2;
	char *p;
	p=a; //배열이름에는 원래 처음 주소값이 포함되어있기 때문에 & 안 써도된다! 
	scanf("%s", a);
	scanf("%d %d", &num1, &num2);
	for(int i=num1; i<=num2; i++){
		printf("%c", *(p+i-1));
	}
}