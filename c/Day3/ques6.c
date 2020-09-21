#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the sides of triangle\n");
    scanf("%d%d%d", &a, &b, &c);
  if(a==b && b==c){
      printf("Triangle is euilateral\n");
  }
  else if(a==b || b==c || a==c){
      printf("Triangle is isocelles\n");

  }
  else{
      printf("Triangle is Scalene\n");

  }

    return 0;
}
