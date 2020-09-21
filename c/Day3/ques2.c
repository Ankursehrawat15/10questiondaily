#include<Stdio.h>
void main(){
int month;
printf("Enter the no of month from 1-12\n");
scanf("%d",&month);
if (month==1 || month==3 || month==5 || month ==12 || month==7 || month==10){
    printf("31 DAYS\n");
}
else if(month==4 || month==6 || month==9 || month==11){
    printf("30 DAYS\n");

}
else if(month==2){
    printf("28 DAYS and if leap year 29 DAYS\n");

}
else{
    printf("Invalid input\n");

}
}
