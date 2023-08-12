#include <stdio.h>

int main(){
	int hour, minute;
	scanf("%d %d", &hour, &minute);
	if(minute >= 30){
		printf("%d %d", hour, minute-30);
	}	
	else{
		hour--;
		if(hour < 0) hour = 23;
		printf("%d %d", hour, minute+30);
	}
		
		
	return 0;
}
