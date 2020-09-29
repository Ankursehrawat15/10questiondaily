#include<stdio.h>
void main(){
  int num,i,sum=0;
  printf("Enter the limit: ");
  scanf("%d",&num);
  for(i=1;i<=num;i++){
    if(i%2==0){
      printf("%d ",i);
      sum+=i;
    }
  
  }
  printf("sum of all even numbers are %d\n",sum);
}
