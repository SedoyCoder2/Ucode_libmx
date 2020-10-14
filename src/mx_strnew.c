#include "libmx.h"

char *mx_strnew(const int size) {
    char *s = NULL;
    
    if (size < 0) 
        return NULL;
    s = malloc(size + 1);
    for (int i = 0; i < size + 1; i++) { 
        s[i] = '\0';
    }
    return s;
}

// int main(void) {
//     char *test = "BFGgame";
//     printf("%s\n", mx_strnew(11));
//     system("leaks -q a.out");
// }

