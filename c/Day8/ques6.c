#include<stdio.h>
int test(int a , int b){
    return (a>=100 && a<=200) || (b>=100 && b<=200);
    }
void main(){
    int num1,num2;
    printf("Enter the two numbers: ");
    scanf("%d%d", &num1, &num2);
    printf("%d",test(num1, num2));
}
