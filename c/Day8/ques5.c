#include<stdio.h>
int test(int a );
int main(){
    int num;
printf("Enter a positive number: ");
scanf("%d",&num);
printf("%d",test(num));

return 0;


}
int test(int a ){
    if(a%3==0 || a%7==0){
        return 1;
    }
    else{
        return 0;
    }
}
