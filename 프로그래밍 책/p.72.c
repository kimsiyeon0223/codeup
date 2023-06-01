#include <stdio.h>

int main(){
	char name[5];
	int age;
	char code;
	float key;
	
	scanf("%s %d %c %f", &name, &age, &code, &key);
	printf("이름 : %s\n나이 : %d\n부서코드 : %c\n보안키 : %f", name, age, code, key);
}