#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p = (int*)malloc(sizeof(int));
    if (p == NULL) {
        printf("Failed to allocate memory");
        return -1;
    }
    *p = 5;
    printf("%d",*p);
    free(p);
    p = NULL;  //avoid dangling pointer
    free(p);
    printf("\n");


    int *p1 = (int*)calloc(1,sizeof(int));
    if (p1 == NULL) {
        printf("Failed to allocate memory");
        return -1;
    }
    *p1 = 10;
    printf("%d",*p1);
    free(p1);
    p1 = NULL;


    //allocate memory to array
    int S = 5;
    int *ptr = (int *)malloc(S * sizeof(int));
    if (ptr == NULL){
        printf("Failed to allocate the memory");
        return -1;
    } 
    free(ptr);
    ptr = NULL;
    return 0;
}

/*
    Program: Dynamic Memory Allocation using malloc() and calloc() in C++

    This program demonstrates:
    - Allocating memory dynamically using malloc()
    - Checking whether memory allocation was successful
    - Allocating zero-initialized memory using calloc()
    - Storing and printing values
    - Releasing allocated memory using free()
    - Setting pointers to NULL to avoid dangling pointers
    - Allocating memory for an integer array

    Note:
    In C++, malloc() returns a void pointer (void *).
    An explicit type cast is required because C++ does not
    implicitly convert void * to another pointer type.
*/