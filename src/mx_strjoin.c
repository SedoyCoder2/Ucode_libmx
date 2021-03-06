#include "libmx.h"

char *mx_strjoin(const char *s1, const char *s2) {
    if (!s1 && !s2)
        return NULL;
    else if (!s1)
        return mx_strdup(s2);
    else if (!s2)
        return mx_strdup(s1);
    
    char *copy = NULL;
    copy = mx_strnew(mx_strlen(s1) + mx_strlen(s2) + 1);
    copy = mx_strcpy(copy, s1);
    copy = mx_strcat(copy, s2);
    return copy;
}

// int main() {
//     const char *s1 = "Hello";
//     const char *s2 = "1234";
//     printf("%s\n", mx_strjoin(s1, s2));
// }



