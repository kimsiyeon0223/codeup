#include <stdio.h>

int main(){
  int n, temp=0;
  scanf("%d", &n);
  for(int i=1; i<=n; i++){
    if(i%10==1) temp++;
  }
  printf("%d", temp);
}
