#include <stdio.h>

void squeeze(char *str) {
    int i = 0, j = 0;
    char out[100];
    
    while (str[i] != '\0') {
        if (str[i] != 'c' && str[i] != 'C') {
            out[j] = str[i];
            j++;
        }
        i++;
    }
    out[j] = '\0';
    
    printf("Your string without 'c' is-\n%s", out);
}

int main() {
    char str[100];
    
    printf("Enter a string- ");
    scanf("%[^\n]%*c", str);
    
    squeeze(str);
    
    return 0;
}
