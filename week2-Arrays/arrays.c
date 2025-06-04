#include <stdio.h>

int main(void)
{
    /*
    Old code:
    int scores[3];

    scores[0] = 10;
    scores[1] = 20;
    scores[2] = 30;

    printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);
    //return 0;
    */

    const int N = 3;

    //Array
    int scores[N];

    for (int i = 0; i < N; i++)
    {
        printf("Enter score %d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    printf("Average %f\n: ", (scores[0] + scores[1] + scores[2]) / (float)N);

    // Accessing array elements in the memory
    // Use char* instead of string (unless using CS50 library)
    char *s = "HI!";
    printf("%zu\n", strlen(s)); // Print length of string
    printf("%c %c %c\n", s[0], s[1], s[2]); // Print characters
    printf("%d %d %d\n", s[0], s[1], s[2]); // Print ASCII values

}