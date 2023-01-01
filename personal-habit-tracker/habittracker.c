#include <stdio.h>
#include "files.h"

#define FILE_NAME "habits.txt"

int 
main()
{
    FILE *fp;
    fp = open_initial_files(FILE_NAME);


    fclose(fp);
    return 0;
}