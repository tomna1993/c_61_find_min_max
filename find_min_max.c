#include <cs50.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    const int elements = get_int("Number of elements: ");

    int numbers[elements];

    for (int i = 0; i < elements; i++)
    {
        numbers[i] = get_int("Element %i: ", i+1);
    }
    
}