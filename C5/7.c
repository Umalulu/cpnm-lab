#include <stdio.h>
void strrev(char *str1)
{
    int i = 0, j = 0;
    char str2[100];
    while (str1[i] != '\0')
    {
        if (str1[i] == ' ')
        {
            int k = i - 1;
            while (k >= 0 && str1[k] != ' ')
            {
                str2[j] = str1[k];
                j++;
                k--;
            }
            str2[j] = ' ';
            j++;
        }
        i++;
    }
    int k = i - 1;
    while (k >= 0 && str1[k] != ' ')
    {
        str2[j] = str1[k];
        j++;
        k--;
    }
    str2[j] = '\0';
    printf("The string with the words reversed is: %s", str2);
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]%*c", str);
    strrev(str);
    return 0;
}
