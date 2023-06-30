#include <stdio.h>

int main(){
	int arr[5]={10, 20, 30, 40, 50};
	int *p;
	p=arr; //배열의 시작 주소인 a[0]의 주소를 포인터 변수 b에 저장
	printf("%d\n", *p); //10
	printf("%d\n", *p+1); //11
	printf("%d\n", *(p+1)); //20
	printf("%d\n", *(p+3)+10); //50
	
	return 0;
} 