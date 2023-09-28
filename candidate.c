#include <cs50.h>
#include <stdio.h>

typedef struct
{
    string name;
    int votes;
}
candidate;

candidate get_candidate(string prompt);
int main(void)
{
     candidate candidates_array[4];
     for(int i = 0; i < 4; i++)
     {
        candidates_array[i] = get_candidate("enter a candidate: ");
     }
}



candidate get_candidate(string prompt)
{
    printf("%s\n", prompt);

    candidate a;
    a.name = get_string("enter a name: ");
    a.votes = get_int("enter votes: ");
    return a;
}