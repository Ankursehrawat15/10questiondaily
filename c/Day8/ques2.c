#include<stdio.h>
int main(void){
int num1,num2;
printf("Enter the number\n");
scanf("%d%d",&num1, &num2);

if(num1==num2){
    printf("%d",(num1+num2)*3);
}
else{

    printf("%d",num1+num2);
}

}

