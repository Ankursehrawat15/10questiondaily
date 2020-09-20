#include<stdio.h>
int main(){
    char c;
    
    printf("Enter the any character\n");
    scanf("%c",&c);
    if(  (c>='a'&& c<='z') || (c>='A' && c<='Z')  ){
        printf("%c is an alphabet\n",c);

    }
    else if(c>='0'&& c<='9'){
        printf("%c is an number digit\n",c);

    }
    else{
        printf("%c is a special character\n",c);

    }
    return 0;

}
