#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 97;
    void *p = &i;
    char *cp = p;
    printf("%c", *cp);
    return 0;
}
