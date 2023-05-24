#include "one.h"

void handle_env() {
    extern char **environ;

    char **env = environ;
    while (*env != NULL) {
        size_t len = strlen(*env);
        write(STDOUT_FILENO, *env, len);
        write(STDOUT_FILENO, "\n", 1);
        env++;
    }
}