#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    int unique[n];
    int unicount = 0;
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        int ctr = 0;
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                ctr++;
                break;
            }
        }
        if (ctr > 0)
        {
            continue;
        }
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                ctr++;
            }
        }
        if (ctr == 0)
        {
            unique[unicount] = arr[i];
            unicount++;
        }
        else
        {
            int duplicateCount = 0;
            for (int j = 0; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    duplicateCount++;
                }
            }
            printf("%d occurs %d times\n", arr[i], duplicateCount);
        }
    }

    printf("\nNon-repeating numbers in reverse order:\n");
    for (int i = unicount - 1; i >= 0; i--)
    {
        printf("%d ", unique[i]);
    }
    printf("\n");

    return 0;
}

