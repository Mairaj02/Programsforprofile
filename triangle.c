#include <cs50.h>
#include <stdio.h>

int main(void)

{
    int a = get_int("what is a: \n");
    int b = get_int("what is b: \n");
    int c = get_int("what is c: \n");
    if ((a*a) + (b*b) == (c*c) || (a*a) + (c*c) == (b*b) || (b*b) + (c*c) == (a*a))
    {
       printf("yes above given lengths can form a right angled tringle\n");
    }
    else
    printf("no above given lengths cannot form a right angled trinagle\n");

}