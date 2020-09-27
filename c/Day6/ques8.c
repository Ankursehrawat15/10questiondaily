#include<stdio.h>
void  main(){
  int num,i;
 printf("Enter the number\n");
 scanf("%d",&num);
 for(i=1;i<=10;i++){
   printf("%d X %d = %d\n",num,i,(num*i));
 }
  }
