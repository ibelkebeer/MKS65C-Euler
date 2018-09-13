#include <stdio.h>
int problem1(){
  int y = 0;
  int i;
  for(i = 0; i < 1000; i++){
    if(i % 3 == 0 || i % 5 == 0){
      y += i;
    }
  }
  return y;
}
int isMultiple(int num){
  int i;
  for(i = 11; i <= 20; i++){
    if(num % i != 0){
      return 1;
    }
  }
  return 0;
}
int problem5(){
  int y = 20;
  while(isMultiple(y) == 1){
    y += 20;
  }
  return y;
}
int problem6(){
  int i;
  int sum1 = 0;
  int sum2 = 0;
  for(i = 1; i <= 100; i++){
    sum1 += i;
    sum2 += i * i;
  }
  return sum1 * sum1 - sum2;
}
int main(){
  printf("%d\n",problem1());
  printf("%d\n",problem5());
  printf("%d\n",problem6());
  return 0;
}
