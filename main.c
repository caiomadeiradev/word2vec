#include "common.h"

int main(void)
{
    int size, twords;
    FILE *fp = openfile("test.txt", "r");
    size = countlines(fp, 1000);
    char* buffer = stralloc(size*100);

    printf("File lines: %d\n", size);
    printf("File buffer size: %d\n", size*100);

    twords = totalwords(fp, size*1000);
    printf("total words: %d\n", twords);

    return 0;
}