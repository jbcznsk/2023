#include "files.h"

FILE* open_initial_files(char* file_name){
    printf("Opening habits file...\n");
    FILE *fp = fopen(file_name, "r");
    if (fp == NULL){
        printf("habits file do not exist, creating a new one\n");
        fp = fopen(file_name, "w");
    }
    return fp;
}