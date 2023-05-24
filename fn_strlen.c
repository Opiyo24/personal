#include "one.h"

size_t my_strlen(const char *str) {
    const char *ptr = str;
    while (*ptr != '\0') {
        ptr++;
    }
    return (size_t)(ptr - str);
}

