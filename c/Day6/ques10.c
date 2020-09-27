#include<stdio.h>
void main(){
  int i,num,sum=0;
  printf("Enter the number of odd terms : \n");
  scanf("%d",&num);
  for(i=1;i<=num;i++){
    printf("%d , ",2*i-1);
  sum+=(2*i-1);
  }
printf("\nsum of all the odd terms is %d \n",sum);
}
