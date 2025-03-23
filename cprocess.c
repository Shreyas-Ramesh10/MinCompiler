//Has functions that deal with compiler process operation, create the actual compile process
#include <stdio.h>
#include <stdlib.h> //for calloc()/malloc()
#include "compiler.h"

struct compile_process* compile_process_create(const char* filename, const char* filename_out, int flags)
{
    FILE* file = fopen(filename, "r");
    if(!file)
    {
        return NULL;
    };

    FILE* out_file = NULL;
    if(filename_out)
    {
        out_file = fopen(filename_out, "w");
        if(!out_file)
        {
            return NULL;
        };    
    }

    struct compile_process* process = calloc(1, sizeof(struct compile_process)); //Calloc returns a pointer to process of size "struct compiler_process"
    process -> flags = flags;
    process -> cfile.fp = file;
    process -> ofile = out_file;
    return process;
    
};