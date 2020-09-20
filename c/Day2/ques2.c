#include<stdio.h>
void main(){
    int a,b,c,max;
    printf("Enter the  numbers\n");
    scanf("%d %d %d ", &a, &b, &c);
    if((a>b) && (a>c)){
        max=a;
    }
    else if((b>a) && (b>c)){
       max=b;

    }
    else if((c>a) && (c>b)){
        max=c;

    }
    else{
        printf("All numbers are equal\n");

    }
     printf("%d is the greatest of all\n",max);
    

}
