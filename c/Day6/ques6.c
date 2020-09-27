#include<stdio.h>
void main(){
  float avg;
  int num,i,sum=0;
  printf("Input the 10 numbers\n");
  for(i=1;i<=10;i++){
    printf("INPUT NUMBER %d\n",i);
    scanf("%d",&num);

    sum+=num;
  }
  printf("Sum of the numbers is %d\n",sum);
avg=sum/10.0;
printf("Average of the numbers is %f\n",avg);
}
