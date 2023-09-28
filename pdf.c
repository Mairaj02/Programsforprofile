#include <cs50.h>
#include <stdio.h>
#include <stdint.h>

int main(int argc, string argv[])
// checking if command line only includes two commands. 1st = run the program and 2nd = file name on which program will operate.

{
    if (argc != 2)
    {
        printf("invalid input");
        return 1;
    }

// opening the desired file and transferring/copying its data to another file we created.
    string filename = argv[1];

    FILE *testfile = fopen("filename", "r");

// checking if file (user gave) exists or not.
    if (testfile == NULL)
    {
        printf("No such file exists\n");
        return 1;
    }

// creating a special data type (unsigned/only positive) integers only having 8 bytes to work with. Now creating a special array called buffer of size 4. It will store the first 4 bytes of our file (testfile) and then it will read them to check if it is pdf or not because pdf has a special sequence of 4 bytes in the starting to check if it is pdf or not.

    uint8_t buffer[4];

// The special first four bytes of pdf file.

    uint8_t signature[] = {37, 80, 68, 70}

    fread(buffer, 1, 4, testfile);

// now we will check visually on screen, if our buffer is same as the signature.
    for (int i = 0; i < 4; i++)
    {
        if(buffer[i] != signature[i])
        {
            printf("not a pdf\n");
            return 0;
        }
    }
    printf("it is a pdf\n");
    return 0;
}