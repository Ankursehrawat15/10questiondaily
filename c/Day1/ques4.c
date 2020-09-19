#include<stdio.h>
int odd_even(int);
void main(){
    int a,result;
    printf("Enter the value\n");
    scanf(" %d ", &a);
    result=odd_even(a);
    if(result==0){
        printf("Number is even\n");

    }
    else{
        printf("Number is odd\n");
    }
}
int odd_even(int a){
    if(a%2==0){
        return 0;
    }
    else{
        return 1;
    }
}
