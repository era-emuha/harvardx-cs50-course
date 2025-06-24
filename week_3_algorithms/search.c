#include <stdio.h>

int main()
{
    int numbers[] = {20, 500, 5, 100, 1, 50};

    int n;
    printf("Search number: ");
    scanf("%d", &n);

    int found = 0;
    int length = sizeof(numbers) / sizeof(numbers[0]);

    // Linear search algorithm
    for (int i = 0; i < length; i++)
    {
        if (numbers[i] == n)
        {
            printf("Found %d at index %d\n", n, i);
            break;
        }
    }
    if (!found)
    {
        printf("Not found %d\n", n);
    }
}