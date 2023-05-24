#include "one.h"

void handle_builtin(char **vector, char **env) {
    if (strcmp(vector[0], "exit") == 0) {
        fn_exit(vector);
    } else if (strcmp(vector[0], "env") == 0) {
        handle_env();
    } else {
        // Handle other built-in commands here if needed
        char *command_path = get_command_path(vector[0]);
        if (command_path != NULL) {
            execute_command(command_path, vector, env);
            free(command_path);
        } else {
            write(STDERR_FILENO, "No such file or repository!\n", 29);
        }
    }
}