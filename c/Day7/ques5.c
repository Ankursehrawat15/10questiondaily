#include<stdio.h>
void main(){
int fact,mul=1;
printf("Enter the number: ");
scanf("%d",&fact);

for(int i=1;i<=fact;i++){
  mul*=i;
}
printf("Factorial of %d is %d \n",fact,mul);


}
