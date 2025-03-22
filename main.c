#include<stdio.h>
#include "helpers/vector.h"

int main()
{
    struct vector* vec = vector_create(sizeof(int)); //sizeof int ciz vectors are just numbers thatpoint to memory location of where the vector data is.
    int x = 50;
    vector_push(vec, &x);
    int x = 20;
    vector_push(vec, &x);

    vector_set_peek_pointer(vec, 0);
    int *ptr = vector_peek(vec); //returns a pointer to the value we pushed to the stack
    
    
    return 0;
}