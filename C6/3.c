#include <stdio.h>
#include <string.h>

struct Student
{
    char name[50];
    int rollNo;
    float marks[6];
    float average;
};

void printRankList(struct Student students[], int numStudents)
{
    struct Student temp;
    printf("Rank List (Name, Roll No, Average):\n");
    for (int i = 0; i < numStudents - 1; ++i)
    {
        for (int j = 0; j < numStudents - i - 1; ++j)
        {
            float sum1 = 0, sum2 = 0;
            for (int k = 0; k < 6; ++k)
            {
                sum1 += students[j].marks[k];
                sum2 += students[j + 1].marks[k];
            }
            students[j].average = sum1 / 6.0;
            students[j + 1].average = sum2 / 6.0;
            if (students[j].average > students[j + 1].average)
            {
                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }

    // Printing the sorted rank list
    for (int i = 0; i < numStudents; ++i)
    {
        printf("%s %d %.2f\n", students[i].name, students[i].rollNo, students[i].average);
    }
}

int main()
{
    struct Student students[5];

    printf("Enter details for 5 students:\n");
    for (int i = 0; i < 5; ++i)
    {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll No: ");
        scanf("%d", &students[i].rollNo);
        printf("Enter marks for 6 subjects:\n");
        for (int j = 0; j < 6; ++j)
        {
            printf("Subject %d: ", j + 1);
            scanf("%f", &students[i].marks[j]);
        }
    }

    printRankList(students, 5);

    return 0;
}
