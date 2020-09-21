#include <stdio.h>
void main()
{
    int note500, note100, note50, note20, note10, note5, amnt;
    note500 = note100 = note50 = note20 = note10 = note5 =0 ;
    printf("Enter the Amount\n");
    scanf("%d", &amnt);
    if (amnt >= 500)
    {
        note500 = amnt / 500;
        amnt -= note500 * 500;
    }
     if (amnt >= 100)
    {
        note100 = amnt / 100;
        amnt -= note100 * 100;
    }
     if (amnt >= 50)
    {
        note50 = amnt / 50;
        amnt -= note50 * 50;
    }
     if (amnt >= 20)
    {
        note20 = amnt / 20;
        amnt -= note20 * 20;
    }
     if (amnt >= 10)
    {
        note10 = amnt / 10;
        amnt -= note10 * 10;
    }
    if (amnt >= 5)
    {
        note5 = amnt / 5;
        amnt -= note5 * 5;
    }
    printf("500 = %d\n", note500);
    printf("100 = %d\n", note100);
    printf("50 = %d\n", note50);
    printf("20 = %d\n", note20);
    printf("10 = %d\n", note10);
    printf("5 = %d\n", note5);
}
