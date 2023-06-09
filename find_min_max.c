#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int get_numbers(int array_to_save[]);
int min(int numbers[], int array_length);
int max(int numbers[], int array_length);

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf ("Usage: ./find_min_max <min>\n");
        return EXIT_FAILURE;
    }
    
    int input;
    do
    {
       input = get_int("Number of elements: ");
    } 
    while (input <= 0 || input >= 15);

    const int elements = input;

    int numbers[elements];

    for (int i = 0; i < elements; i++)
    {
        numbers[i] = get_int("Element %i: ", i+1);
    }

    if (strcmp("min", argv[1]) == 0)
    {
        printf ("The min value is: %i\n", min(numbers, elements));
        return EXIT_SUCCESS;
    }
    else if (strcmp("max", argv[1]) == 0)
    {
        printf ("The max value is: %i\n", max(numbers, elements));
        return EXIT_SUCCESS;
    }

    return EXIT_FAILURE;
}

int min(int numbers[], int array_length)
{
    int min = numbers[0];

    for (int i = 1; i < array_length; i++)
    {
        if (min > numbers[i])
        {
            min = numbers[i];
        }
    }

    return min;
}

int max(int numbers[], int array_length)
{
    int max = numbers[0];

    for (int i = 1; i < array_length; i++)
    {
        if (max < numbers[i])
        {
            max = numbers[i];
        }
    }

    return max;
}