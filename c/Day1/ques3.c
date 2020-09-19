#include<stdio.h>
void avg(int,int,int,int,int);
void main(){
    int a,b,c,d,e;
    printf("Enter 5 numbers\n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
avg(a,b,c,d,e);




}
void avg(int a,int b, int c, int d, int e){

printf("Average of these numbers is %d\n",(a+b+c+d+e)/5);


}
