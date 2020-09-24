#include<stdio.h>
int main(){
     int num,i,sum=0;
     printf("Enter the number\n");
     scanf("%d",&num);
     for(i=1;i<=num;i++){
         sum += i;
     }
     printf("%d",sum);
     return 0;
}
