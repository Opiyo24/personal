#include "one.h"

void fn_exit(char **args) {
    if (args[1] != NULL) {
        int status = fn_atoi(args[1]);
        exit(status);
    } else {
        exit(EXIT_SUCCESS);
    }
}