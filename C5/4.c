#include<stdio.h>
int strint(char *str){
    int i=0, num=0;
    while (str[i]!='\0')
    {   num=num*10+(str[i]-48);
        i++;
    }
    return num;
    
}
int main()
{   char str[100];
    printf("Enter a number string-");
    scanf("%s",str);
    printf("Required integer is- %d",strint(str));
    return 0;
}