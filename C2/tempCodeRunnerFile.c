#include <stdio.h>
int main()
{
    char s;
    printf("Enter a character-");
    scanf("%d", &s);
    if (s >= 48 && s <= 57)
    {
        printf("%c is an integer", s);
    }
    else if (s >= 65 && s <= 90)
    {
        printf("%c is an uppercase alphabet", s);
    }
    else if (s >= 98 && s <= 122)
    {
        printf("%c is an lowercase alphabet", s);
    }
    else
    {
        printf("%c is a special character",s);
    }
    return 0;
}