#include "common.h"

char* stralloc(int buffer_size)
{
    char* s = (char*)malloc(buffer_size*sizeof(char));
    if (!s) return NULL;
    return s;
}

FILE* openfile(const char* filename, const char* mode)
{
    FILE *fp = fopen(filename, mode);
    if (!fp) return NULL;
    return fp;
}

char* getfilecontent(FILE* fp)
{
    char* buffer = stralloc(1000);
    strcpy(buffer, "");

    if (buffer)
    {
        while(fgets(buffer, sizeof(buffer), fp))
        {
            printf("%s\n", buffer);
        }
    }

    return buffer;
}

int countlines(FILE* fp, int buffsize)
{
    int counter = 0;
    char* buffer = stralloc(buffsize);
    strcpy(buffer, "");

    if (buffer)
    {
        while(fgets(buffer, sizeof(buffer), fp))
        {
            counter++;
        }
    }
    free(buffer);
    return counter - 1; // counter - EOF
}

int totalwords(FILE* fp, int buffsize)
{
    int count = 0;
    char* buffer = stralloc(1000);
    strcpy(buffer, "");

    if (buffer)
    {
        while(fgets(buffer, sizeof(buffer), fp))
        {
            printf("%s\n", buffer);
            for(int i = 0; i < strlen(buffer); i++)
            {
                if (buffer[i] == '\0' || buffer[i] == ' ' || 
                    buffer[i] == '\n' || buffer[i] == '\t' || 
                    buffer[i] == EOF)
                    {
                        count++;
                    }
            }
        }
    }

    free(buffer);
    return count;
}