#include <stdio.h>
void name(char *str)
{
    char ini[10];
    int i = 0, j = 1;
    ini[0] = str[0];
    while (str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            ini[j] = str[i + 1];
            j++;
        }
        i++;
    }
    ini[j] = '\0';
    printf("The initials are %s", ini);
}
int main()
{
    char str[100];
    printf("Enter a string-");
    scanf("%[^\n]%*c", str);
    name(str);
    return 0;
}