#include<stdio.h>
int test( int a, int b){
if(a==30 || b==30){
    return 1;
}
else if (a+b==30){
    return 1;
}
else{
    return 0;
}

}
void main(){
int num1,num2,sum;
printf("Enter the two numbers: ");
scanf("%d%d",&num1 ,&num2);
sum=test( num1, num2);
printf("\n%d",sum);




}
