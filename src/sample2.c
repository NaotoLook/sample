#include<stdio.h>

int func(int);


int main(void){

  int n;

  printf("input number(n > 0) : ");
  scanf("%d", &n);
  
  if(func(n) == -1) return 0;

  printf("ans %d\n", func(n));
  
  return 0;
}

int func(int n){
  if(n == 1){
    return 1;
  }else if(n > 1){
    return n*func(n-1);
  }
    printf("error number!\n");
    return -1;
}
