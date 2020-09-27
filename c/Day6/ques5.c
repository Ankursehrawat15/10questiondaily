#include<stdio.h>
void main(){
int i=1,num,sum=0;
printf("enter the number\n");
scanf("%d",&num);
printf("first %d natural numbers are\n",num);
for(i=1;i<=num;i++){
  printf("%d",i);
  
  sum+=i;
}
printf("\nSum of natural numbers upto %d is %d\n",num,sum);
}
