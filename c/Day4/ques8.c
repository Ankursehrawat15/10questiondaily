#include<stdio.h>
float add(float num1 , float num2){
    return num1+num2;

}
float sub(float num1 , float num2){
    return num1-num2;
}
float mul(float num1 , float num2){
    return num1*num2;

}
float div(float num1 , float num2){
    return num1/num2;
}

int main(){
 char op;
    float num1, num2, result;

    printf("WELCOME TO SIMPLE CALCULATOR\n");
    printf("----------------------------\n");
    printf("Enter [number 1] [+ - * /] [number 2]\n");

 
    scanf("%f %c %f", &num1, &op, &num2);

switch(op){
    case '+' :
    result=add( num1,num2);
    break;

    case '-' :
    result=sub(num1, num2);
    break;

    case '*' :
    result=mul( num1,  num2);
    break;


    case '/' :
    result=div( num1,  num2) ;
    break;

    default :
    printf("INVALID OPERATOR\n");

}
printf("%f %c %f = %.4f",num1,op,num2,result);
return 0;


}
