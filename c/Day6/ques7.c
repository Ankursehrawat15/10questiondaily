#include<stdio.h>
void  main(){
  int num,i;
  printf("Enter the number\n");
  scanf("%d",&num);
  for(i=1;i<=num;i++){
    printf("Number is %d and cube of %d is %d\n",i,i,i*i*i);
  }
}
