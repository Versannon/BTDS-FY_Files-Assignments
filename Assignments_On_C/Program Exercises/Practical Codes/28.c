#include <stdio.h>

#define MAX 100

#undef MAX

#define VALUE 50

int main() {
    int num = VALUE;

    #ifdef MAX
        printf("MAX is defined and its value is: %d\n", MAX);
    #else
        printf("MAX is not defined\n");
    #endif

    #ifndef MIN
        printf("MIN is not defined\n");
        #define MIN 10
    #endif

    printf("VALUE is defined and its value is: %d\n", VALUE);
    printf("MIN is defined and its value is: %d\n", MIN);

    return 0;
}

/*
Explanation of the program:
- The program demonstrates the use of various preprocessor directives in C.
- It includes the following steps:
  - Uses `#include <stdio.h>` to include the standard input-output header file.
  - Uses `#define MAX 100` to define a constant named MAX with a value of 100.
  - Uses `#undef MAX` to undefine the constant MAX.
  - Uses `#define VALUE 50` to define a constant named VALUE with a value of 50.
  - In the main function:
    - Declares an integer variable num and initializes it with the value of VALUE.
    - Uses `#ifdef MAX` to check if MAX is defined:
      - If MAX is defined, prints its value.
      - If MAX is not defined, prints a message indicating that MAX is not defined.
    - Uses `#ifndef MIN` to check if MIN is not defined:
      - If MIN is not defined, prints a message indicating that MIN is not defined and defines MIN with a value of 10.
    - Prints the value of VALUE.
    - Prints the value of MIN.
  - Returns 0 to indicate that the program executed successfully.
*/