#include "one.h"

char *my_strdup(const char *str) {
    size_t len = my_strlen(str) + 1;
    char *dup = (char *)malloc(len);
    if (dup != NULL) {
        my_memcpy(dup, str, len);
    }
    return dup;
}
