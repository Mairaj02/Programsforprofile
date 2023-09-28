#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string word = get_string("word: ");
    int word_length = strlen(word);
    for(int i = 0; i < word_length - 1; i++)
    {
        if (word[i] > word[i + 1])
        {
            printf("no\n");
            return 0;
        }
    }
    printf ("yes\n");
    return 0;
}