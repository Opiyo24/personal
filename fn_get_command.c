#include "one.h"

char *get_command_path(char *cmd) {
    char *path = getenv("PATH");
    char *token = fn_strtok(path, ":");

    while (token != NULL) {
        char command_path[MAX_COMMAND];
        snprintf(command_path, sizeof(command_path), "%s/%s", token, cmd);
        if (access(command_path, X_OK) == 0) {
            return my_strdup(command_path);
        }
        token = fn_strtok(NULL, ":");
    }

    return NULL;
}