#include<stdio.h>
int test(int n){
    if(n>51){
        return (n-51)*3;
    
    }
    else{
        return (51-n);
    }
}
int main(void){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    printf("%d\n",test(num));

}
