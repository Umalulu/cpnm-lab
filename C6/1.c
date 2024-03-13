#include <stdio.h>
#include <string.h>

struct stu_data
{
    char name[20];     
    int roll;
    char dept[20];
    int year;
};

void query1(struct stu_data database[], int numStudents)
{
    int xxxx;
    printf("Enter a year of joining: ");
    scanf("%d", &xxxx);
    printf("Students who joined in %d are:\n", xxxx);
    for (int i = 0; i < numStudents; i++)
    {
        if (database[i].year == xxxx)
        {
            printf("%s\n", database[i].name);
        }
    }
}

void query2(struct stu_data database[], int numStudents)
{
    int rollNo;
    printf("Enter a roll number to get details: ");
    scanf("%d", &rollNo);
    int found = 0;
    for (int i = 0; i < numStudents; i++)
    {
        if (database[i].roll == rollNo)
        {
            printf("Details for roll number %d:\n", rollNo);
            printf("Name: %s\n", database[i].name);
            printf("Roll: %d\n", database[i].roll);
            printf("Department: %s\n", database[i].dept);
            printf("Year of Joining: %d\n", database[i].year);
            found = 1;
            break;
        }
    }
    if (!found)
    {
        printf("Student with roll number %d not found\n", rollNo);
    }
}

int main()
{
    struct stu_data database[100];
    int numStudents;

    printf("Enter the number of students (up to 100): ");
    scanf("%d", &numStudents);

    printf("Enter student details:\n");
    for (int i = 0; i < numStudents; i++)
    {
        getchar();
        printf("Enter name for student %d: ", i + 1);
        fgets(database[i].name, sizeof(database[i].name), stdin);
        database[i].name[strcspn(database[i].name, "\n")] = '\0';

        printf("Enter roll for student %d: ", i + 1);
        scanf("%d", &database[i].roll);

        getchar();
        printf("Enter department for student %d: ", i + 1);
        fgets(database[i].dept, sizeof(database[i].dept), stdin);
        database[i].dept[strcspn(database[i].dept, "\n")] = '\0';

        printf("Enter year of joining for student %d: ", i + 1);
        scanf("%d", &database[i].year);
    }

    query1(database, numStudents);
    query2(database, numStudents);

    return 0;
}
