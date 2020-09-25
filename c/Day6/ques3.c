#include<stdio.h>
int main(){
 int num,first,second,third,fourth;
 printf("Enter a 4 digit number\n");
 scanf("%d",&num);
  first=num/1000;
  num%=1000;

  second=num/100;
  num%=100;

  third=num/10;
  num%=10;

  fourth=num;
  printf("Sum of first and fourth digit %d\n",first+fourth);
  return 0;   
}
