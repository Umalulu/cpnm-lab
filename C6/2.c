#include <stdio.h>

int main() {
    FILE *filePointer;
    char fileName[50];
    char data[100];

    printf("Enter the file name: ");
    scanf("%s", fileName);

    filePointer = fopen(fileName, "w");

    if (filePointer == NULL) {
        printf("File could not be created/opened.\n");
        return 1;
    }

    printf("Enter data to be written in the file (max 100 characters): ");
    scanf(" %[^\n]s", data);

    fprintf(filePointer, "%s", data);

    fclose(filePointer);

    printf("Data has been written to the file '%s' successfully.\n", fileName);

    return 0;
}
