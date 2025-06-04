#include <stdio.h>

int main(void)
{
    int scores[3];

    scores[0] = 10;
    scores[1] = 20;
    scores[2] = 30;

    printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);
    //return 0;
}