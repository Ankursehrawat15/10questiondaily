#include<stdio.h>
int main(){
int num,count=0;
printf("Enter the number\n");
scanf("%d",&num);
do{
    count++;
    num/=10;



}while(num!=0);
printf("Total digits are %d\n",count);
return 0;















}
