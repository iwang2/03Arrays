#include <stdio.h>
#include <stdlib.h>

int main(){
  int a[10];
  srand(time(NULL));
  for(int i = 0; i < 10; i++){
    a[i] = rand();
    if(i == 9){
      a[i] = 0;
    }
    printf("a[%d] = %d\n", i, a[i]);
  }

  printf("\n");

  int b[10];
  int *p;
  for(int i = 0; i < 10; i++){
    p = &a[9-i];
    b[i] = *p;
    printf("b[%d] = %d\n", i, b[i]);
  }
}
