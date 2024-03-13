#include <stdio.h>

int fileCopy(const char *inputFileName, const char *outputFileName)
{
    FILE *inputFile, *outputFile;
    char ch;

    inputFile = fopen(inputFileName, "r");
    if (inputFile == NULL)
    {
        printf("Unable to open file %s\n", inputFileName);
        return 1;
    }

    outputFile = fopen(outputFileName, "w");
    if (outputFile == NULL)
    {
        printf("Unable to create file %s\n", outputFileName);
        fclose(inputFile);
        return 1;
    }

    while ((ch = fgetc(inputFile)) != EOF)
    {
        fputc(ch, outputFile);
    }

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}

int main()
{
    char inputFileName[50];
    char outputFileName[50];

    printf("Enter input file name: ");
    scanf("%s", inputFileName);

    printf("Enter output file name: ");
    scanf("%s", outputFileName);

    int copyStatus = fileCopy(inputFileName, outputFileName);

    if (copyStatus == 0)
    {
        printf("File copied successfully.\n");
    }
    else
    {
        printf("File copy failed.\n");
    }

    return 0;
}
