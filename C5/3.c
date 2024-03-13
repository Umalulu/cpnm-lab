#include <stdio.h>
int strlen(char *str)
{
    int i = 0, ctr = 0;
    while (str[i] != '\0')
    {
        if (str[i] == 'a' ||
            str[i] == 'e' ||
            str[i] == 'i' ||
            str[i] == 'o' ||
            str[i] == 'u' ||
            str[i] == 'A' ||
            str[i] == 'E' ||
            str[i] == 'I' ||
            str[i] == 'O' ||
            str[i] == 'U')
        {
            if (str[i + 1] == 'a' ||
                str[i + 1] == 'e' ||
                str[i + 1] == 'i' ||
                str[i + 1] == 'o' ||
                str[i + 1] == 'u' ||
                str[i + 1] == 'A' ||
                str[i + 1] == 'E' ||
                str[i + 1] == 'I' ||
                str[i + 1] == 'O' ||
                str[i + 1] == 'U')
            {
                ctr++;
            }
        }

        i++;
    }
    return ctr;
}
int main()
{
    char str[100];
    printf("Enter a string-");
    scanf("%[^\n]%*c", str);
    printf("Two consecutive vowels occur %d times", strlen(str));
    return 0;
}