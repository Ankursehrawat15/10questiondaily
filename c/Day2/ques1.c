#include<Stdio.h>
int main(){
int num1,num2;
printf("Enter two numbers\n");
scanf("%d %d", &num1, &num2);
if(num1>num2){
    printf("%d is greater\n",num1);
}
if(num1==num2){
    printf("Both numbers are equal\n");

}
else{
    printf("%d is greatest\n",num2);

}
return 0;




}
