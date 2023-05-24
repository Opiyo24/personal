#include "one.h"

ssize_t my_getline(char **lineptr, size_t *n, FILE *stream) {
    ssize_t bytesRead = 0;
    size_t currentPosition = 0;
    int isNewLine = 0;
    int c;

    if (*lineptr == NULL || *n == 0) {
        *n = BUFSIZ;
        *lineptr = malloc(*n);
        if (*lineptr == NULL) {
            return -1;
        }
    }

    while ((c = getc(stream)) != EOF) {
        if (currentPosition >= *n - 1) {
            *n += BUFSIZ;
            char *newLineptr = realloc(*lineptr, *n);
            if (newLineptr == NULL) {
                return -1;
            }
            *lineptr = newLineptr;
        }

        (*lineptr)[currentPosition++] = c;

        if (c == '\n') {
            isNewLine = 1;
            break;
        }
    }

    (*lineptr)[currentPosition] = '\0';
    bytesRead = currentPosition;

    if (bytesRead == 0 && !isNewLine) {
        return -1;
    }

    return bytesRead;
}