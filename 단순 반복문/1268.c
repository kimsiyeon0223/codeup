#include <stdio.h>

int main(){
  int n, arr[100], temp=0;
  scanf("%d\n", &n);
  for(int i=1; i<=n; i++){
    scanf("%d ", &arr[i]);
    if(arr[i]%2==1) temp++;
  }
  printf("%d", temp);
  
  return 0;
}
