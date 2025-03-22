//This file will contain core compiler routines 
#include "compiler.h"


int compile_file(const char* filename, const char* out_filename, int flags) //When someone wants to compiler Test.c, they will send the file name to char* filename, out files like "Test.exe" will compiler it into, flags will tell how we will compile it like is it an exe or obj etc
{
    struct compile_process* process = compile_process_create(filename, out_filename, flags);

    if(!process)
        return COMPILER_FAILED_WITH_ERRORS;

        // Perform lexical analysis

        // Perform parsing

        //Perform code generation..


    return COMPILER_FILE_COMPILED_OK;
}