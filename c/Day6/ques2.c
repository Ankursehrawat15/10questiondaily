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
  printf("First digit of your number %d\n",first);
  printf("Fourth digit of your number %d\n",fourth);
  return 0;   
}
