#include <stdio.h>

int main(){
  int a, b, c;
  scanf("%d %d", &a, &b);
  c = a / 10000;
  if(b == 1 || b ==2){
    printf("%d", 2012 + 1 - (1900+c));
  }
  else{
    printf("%d", 2012 + 1 - (2000+c));
  }
  
  return 0;
}