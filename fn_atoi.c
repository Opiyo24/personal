#include "one.h"

int fn_atoi(const char *str) {
    int sign = 1;
    int result = 0;
    int i = 0;

    // Check for sign
    if (str[0] == '-') {
        sign = -1;
        i++;
    } else if (str[0] == '+') {
        i++;
    }

    // Process digits
    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9') {
            result = result * 10 + (str[i] - '0');
            i++;
        } else {
            break;  // Stop processing if non-digit character encountered
        }
    }

    return sign * result;
}