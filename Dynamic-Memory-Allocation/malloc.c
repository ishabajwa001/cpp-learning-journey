#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p = malloc(sizeof(int));
    *p = 5;
    printf("%d",*p);
    free(p);
    p = NULL;
    free(p);
    return 0;

}

/*
    Program: Dynamic Memory Allocation using malloc() in C

    This program demonstrates:
    - Allocating memory dynamically using malloc()
    - Checking whether memory allocation was successful
    - Storing and printing a value
    - Releasing allocated memory using free()
    - Setting the pointer to NULL to avoid a dangling pointer
    - Showing that calling free(NULL) is safe

    Note:
    In C, malloc() returns a void pointer (void *) which is
    automatically converted to the required pointer type.
    Therefore, an explicit type cast is not required.
*/