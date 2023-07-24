#include <stdio.h>

int main(){
	int n;
	int high=0;
	int low=1001;
	scanf("%d", &n);
	
	int arr[n]; //배열의 크기를 n에 맞추기 
	for(int i=0; i<n; i++){ //c언어에서 배열의 인덱스는 0부터 시작 
		scanf("%d", &arr[i]);
		if(arr[i]>high){
			high=arr[i];
		}
		if(arr[i]<low){
			low=arr[i];
		}
	}
	printf("%d", high-low);
	return 0; 
}