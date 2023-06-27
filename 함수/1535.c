#include <stdio.h>

int n, d[110];

int f(){
	int ans, max=0;
	while(n--){
		if(d[n] >= max){
			max=d[n];
			ans=n+1;
		}
			
	}
	return ans;
	
}

int main(){
	scanf("%d", &n);
	
	for(int i=1; i<=n; i++)
		scanf("%d", &d[i]);
	printf("%d", f());
	return 0;
}