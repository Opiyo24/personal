#ifndef ONE_H
#define ONE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <dirent.h>
#include <fcntl.h>
#include <limits.h>
#include <sys/stat.h>
#include <signal.h>


#define MAX_COMMAND 100
#define MAX_ARGS 10

void prompt(void);
void parse_command(char *command, char **vector);
char *get_command_path(char *cmd);
void execute_command(char *cmd, char **args, char **env);
int fn_atoi(const char *str);
void fn_exit(char **args);
void handle_env(void);
void handle_builtin(char **vector, char **env);
ssize_t my_getline(char **lineptr, size_t *n, FILE *stream);
void simple_shell(char **env);
int fn_atoi(const char *str);
void *my_memcpy(void *dest, const void *src, size_t n);
char *my_strdup(const char *str);
size_t my_strlen(const char *str);
char *fn_strtok(char *str, const char *delim);


#endif
