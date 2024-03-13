#include <stdio.h>
#include <string.h>
int main()
{
    char str[250];
    printf("Enter a string (without punctuations and extra spaces)-\n");
    scanf("%[^\n]%*c", str);
    printf("Your string is-\n '%s'", str);
    int len = strlen(str);
    int ctr = 0;
    for (size_t i = 0; i < len; i++)
    {
        if (str[i] == ' ')
        {
            ctr++;
        }
    }
    printf("\nNumber of character in the string (including spaces) is : %d\n", len);
    printf("Number of words in the string is : %d\n", ctr + 1);
    printf("The string in reverse order is-\n");
    for (int i = len - 1; i >=0 ; i--)
    {
        printf("%c",str[i]);
    }

    return 0;
}