// write a program to print size of an int, a float, a char and a double type variable.

// #include <stdio.h>
// int main()
// {
//     char x;
//     float y;
//     int a;
//     double d1;
//     // printf("Enter a data types");
//     printf("%d", sizeof (x)); 
//     printf("%d", sizeof (y));
//     printf("%d", sizeof (a));
//     printf("%d", sizeof (d1));

//     printf("\n");
//     return 0;

    
// }


#include <stdio.h>

int main() {
    // Printing the sizes of different data types
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of char: %zu bytes\n", sizeof(char));
    printf("Size of double: %zu bytes\n", sizeof(double));

    return 0;
}
