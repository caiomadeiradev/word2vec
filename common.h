#ifndef common_h
#define common_h

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

// Prototypes
FILE* openfile(const char* filename, const char* mode);
char* getfilecontent(FILE* fp);
char* stralloc(int buffer_size);
int countlines(FILE* fp, int buffersize);
int totalwords(FILE* fp, int buffsize);

#endif