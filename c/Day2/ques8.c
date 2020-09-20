#include <Stdio.h>
int main()
{
    char c;
    printf("Enter the alphabet\n");
    scanf("%c", &c);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
        printf("%c is a vowel\n",c);
    }
    else if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){

        printf("%c is a vowel\n",c);
    }
    else{
        printf("%c is a consonent\n",c);

    }
    return 0;
}
