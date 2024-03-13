#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    FILE *inputFile, *outputFile;
    int *numbers;
    int num, i;

    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Unable to open file 'input.txt'\n");
        return 1;
    }

    fscanf(inputFile, "%d", &num);
    numbers = (int *)malloc(num * sizeof(int));
    if (numbers == NULL) {
        printf("Memory allocation failed\n");
        fclose(inputFile);
        return 1;
    }

    for (i = 0; i < num; i++) {
        fscanf(inputFile, "%d", &numbers[i]);
    }
    fclose(inputFile);

    bubbleSort(numbers, num);

    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf("Unable to create file 'output.txt'\n");
        free(numbers);
        return 1;
    }

    fprintf(outputFile, "Sorted numbers in ascending order:\n");
    for (i = 0; i < num; i++) {
        fprintf(outputFile, "%d\n", numbers[i]);
    }
    fclose(outputFile);

    free(numbers);

    printf("Numbers sorted and written to 'output.txt' successfully.\n");

    return 0;
}
