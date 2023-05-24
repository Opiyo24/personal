#include "one.h"

/**
 * 
*/

int main() {
    char *env[] = {NULL}; // You should provide the environment variables for execve

    while (1) {
        simple_shell(env);
    }

    return 0;
}