#include <cs50.h>
#include <stdio.h>

const int N = 4;

float average(int array[]);

int main(void)
{
    int scores[N];
    for (int i = 0; i < N; i++)
    {
       scores[i] = get_int("scores: ");
    }

    printf("average: %f\n", average(scores));
}
float average(int array[])
{
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += array[i];
    }
    return sum / (float) N;
}