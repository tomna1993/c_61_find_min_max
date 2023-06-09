# c_61_find_min_max

## DESCRIPTION

### LEARNING GOALS

- Pass an array into a function
- Create a helper function that finds a maximum value
- Create a helper function that finds a minimum value
- Use command-line argument to setup the program to find the minimum or maximum value

### BACKGROUND

There are many situations where you’ll find it helpful to have a function that finds the maximum (and minimum) value in an array. Since there is no built-in `max` or `min` function in C, you’ll create one in this practice problem. You can then use it in upcoming problem sets where it may be helpful!

### Implementation Details

The `main` function initializes the array, asks the user to enter values, and then passes the array and the number of items to the choosen `max` or `min` function.

```bash
$ ./find_min_max max
Number of elements: 3
Element 0: 2
Element 1: 10
Element 2: -1
The max value is 10.

$ ./find_min_max max
Number of elements: 4
Element 0: -100
Element 1: -200
Element 2: -3
Element 3: -5000
The max value is -3.

$ ./find_min_max min
Number of elements: 3
Element 0: 4
Element 1: 8
Element 2: -1
The min value is -1.

$ ./find_min_max min
Number of elements: 4
Element 0: -100
Element 1: -200
Element 2: -3
Element 3: -5000
The min value is -5000.
```