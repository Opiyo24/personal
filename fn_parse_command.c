#include "one.h"

void parse_command(char *command, char **vector) {
    int i = 0;
    char *token = fn_strtok(command, " ");
    while (token != NULL) {
        vector[i++] = token;
        token = fn_strtok(NULL, " ");
    }
    vector[i] = NULL;
}