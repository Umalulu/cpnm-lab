#include<stdio.h>
int strlen(char *str){
    int i=0;
    while (str[i]!='\0')
    {
        i++;
    }
    return i;
    
}
int main()
{   char str[100];
    printf("Enter a string-");
    scanf("%[^\n]%*c",str);
    printf("Number of characters in your array is- %d",strlen(str));
    return 0;
}