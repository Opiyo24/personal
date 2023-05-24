#include "one.h"

void execute_command(char *cmd, char **args, char **env) {
    pid_t child_pid = fork();

    if (child_pid == -1) {
        perror("fork");
        exit(EXIT_FAILURE);
    }
    if (child_pid == 0) {
        if (execve(cmd, args, env) == -1) {
            perror("execve");
            exit(EXIT_FAILURE);
        }
    } else {
        int status;
        waitpid(child_pid, &status, 0);
    }
}