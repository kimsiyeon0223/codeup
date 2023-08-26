#include <stdio.h>

int main(){
  int h,k;
  char d;
  scanf("%d %d %c", &h, &k, &d);
  for(int i=1; i<=h; i++){
    if(d=='L'){
      for(int j=1; j<i; j++)
        printf(" ");
    }
    else if(d=='R'){
      for(int j=h-1; j>=i; j--)
        printf(" ");
    }
    for(int j=1; j<=k; j++)
      printf("*");
    printf("\n");
  }
}
