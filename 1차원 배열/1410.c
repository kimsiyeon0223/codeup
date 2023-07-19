#include <stdio.h>

int main(){
	char arr[100001];
	int a=0;
	int b=0;
	gets(arr);
	for(int i=0; arr[i]!='\0'; i++){
		if(arr[i]=='(') a++;
		else if(arr[i]==')') b++;
	}
	printf("%d %d", a, b);
}