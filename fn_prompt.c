#include "one.h"

void prompt() {
    if (isatty(STDIN_FILENO)) {
        write(STDOUT_FILENO, "Cisfun$ ", 9);
        fflush(stdout);
    }
}