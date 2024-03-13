#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int convertBinaryToDecimal(long long n) {
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0) {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}

int convertOctalToDecimal(int octalNumber) {
    int decimalNumber = 0, i = 0;
    while(octalNumber != 0) {
        decimalNumber += (octalNumber%10) * pow(8,i);
        ++i;
        octalNumber/=10;
    }
    return decimalNumber;
}

int convertHexadecimalToDecimal(char hexVal[]) {
    int len = strlen(hexVal);
    int base = 1;
    int decimalNumber = 0;
    for (int i=len-1; i>=0; i--) {
        if (hexVal[i]>='0' && hexVal[i]<='9') {
            decimalNumber += (hexVal[i] - 48)*base;
            base = base * 16;
        }
        else if (hexVal[i]>='A' && hexVal[i]<='F') {
            decimalNumber += (hexVal[i] - 55)*base;
            base = base*16;
        }
    }
    return decimalNumber;
}

void decToBinary(int n) {
    int binaryNum[32];
    int i = 0;
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    printf("\nBinary: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binaryNum[j]);
}

void decToOctal(int n) {
    int octalNum[100];
    int i = 0;
    while (n != 0) {
        octalNum[i] = n % 8;
        n = n / 8;
        i++;
    }
    printf("\nOctal: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%d", octalNum[j]);
}

void decToHexa(int n) {
    char hexaDeciNum[100];
    int i = 0;
    while(n!=0) {
        int temp  = 0;
        temp = n % 16;
        if(temp < 10) {
            hexaDeciNum[i] = temp + 48;
            i++;
        }
        else {
            hexaDeciNum[i] = temp + 55;
            i++;
        }
        n = n/16;
    }
    printf("\nHexadecimal: ");
    for(int j=i-1; j>=0; j--)
        printf("%c", hexaDeciNum[j]);
}

int main() {
    int choice, num;
    long long binaryNum;
    int octalNum;
    char hexNum[17];
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Choose the number system of the input number: \n1. Binary\n2. Decimal\n3. Octal\n4. Hexadecimal\n");
    scanf("%d", &choice);
    switch(choice) {
        case 1:
            printf("Enter a binary number: ");
            scanf("%lld", &binaryNum);
            num = convertBinaryToDecimal(binaryNum);
            printf("Decimal: %d", num);
            decToBinary(num);
            decToOctal(num);
            decToHexa(num);
            break;
        case 2:
            printf("Decimal: %d", num);
            decToBinary(num);
            decToOctal(num);
            decToHexa(num);
            break;
        case 3:
            printf("Enter an octal number: ");
            scanf("%d", &octalNum);
            num = convertOctalToDecimal(octalNum);
            printf("Decimal: %d", num);
            decToBinary(num);
            decToOctal(num);
            decToHexa(num);
            break;
        case 4:
            printf("Enter a hexadecimal number: ");
            scanf("%s", hexNum);
            num = convertHexadecimalToDecimal(hexNum);
            printf("Decimal: %d", num);
            decToBinary(num);
            decToOctal(num);
            decToHexa(num);
            break;
        default:
            printf("Invalid choice!");
            break;
    }
    return 0;
}



