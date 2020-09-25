#include<stdio.h>
int main(){
 int num,first,second,third,fourth,swap;
 printf("Enter a 4 digit number\n");
 scanf("%d",&num);
  first=num/1000;
  num%=1000;

  second=num/100;
  num%=100;

  third=num/10;
  num%=10;

  fourth=num;
  swap=first;
  first=fourth;
  fourth=swap;
  

  printf("After swaping first digit becomes  %d\n",first);
  printf("After swaping fourth digit becomes  %d\n",fourth);

  return 0;   
}
