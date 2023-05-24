#include "one.h"

char *fn_strtok(char *str, const char *delim) {
    static char *buffer = NULL;  // Pointer to the current position in the string
    static int index = 0;        // Index of the next character to process

    if (str != NULL) {
        buffer = str;   // Initialize buffer with the input string
        index = 0;      // Reset the index
    }

    if (buffer == NULL || buffer[index] == '\0') {
        return NULL;    // No more tokens to parse
    }

    char *token = buffer + index;  // Start of the token

    while (buffer[index] != '\0') {
        // Check if the current character is a delimiter
        if (strchr(delim, buffer[index]) != NULL) {
            buffer[index] = '\0';   // Replace the delimiter with null character
            index++;
            return token;           // Return the current token
        }

        index++;    // Move to the next character
    }

    return token;   // Return the final token (no delimiter found)
}