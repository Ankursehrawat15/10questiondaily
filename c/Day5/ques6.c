#include<stdio.h>
int main(){
    int i,num;
    printf("Enter the number\n");
    scanf("%d",&num);
    i=1;
    while(i<=num){
        if(i%2!=0){
            printf("%d\n",i);
        }
        i++;
    }

    
    return 0;
}
