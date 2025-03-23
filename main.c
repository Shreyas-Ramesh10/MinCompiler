#include<stdio.h>
#include "helpers/vector.h"
#include "compiler.h"
int main()
{
    int res = compile_file("./test.c", "./test", 0);
    if (res == COMPILER_FILE_COMPILED_OK)
    {
        printf("Real good broski, this compiled\n");
    }
    else if(res == COMPILER_FAILED_WITH_ERRORS)
    {
        printf("Oh no, something happened recheck please\n");
    }
    else 
    {
        printf("Tf just happened?\n");
    }
    return 0;
}