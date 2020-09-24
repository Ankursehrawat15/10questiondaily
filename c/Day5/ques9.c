#include<stdio.h>
void main(){
    int num,i,sum=0;
    printf("Enter the number\n");
    scanf("%d",&num);
    for(i=1;i<=num; i++){
        if(i%2!=0){
            sum+=i;
        }
    }
    printf("%d\n",sum);
    
}
