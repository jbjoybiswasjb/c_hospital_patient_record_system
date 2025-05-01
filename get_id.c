#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "get_id.h"

#define MAX_LINE 256

// Get the last patient ID from file
int get_last_id(const char *filename)
{
    FILE *file = fopen(filename, "r");
    if (!file)
    {
        return 0;
    };

    char line[MAX_LINE];
    int last_id = 0;

    while (fgets(line, sizeof(line), file)) {
        line[strcspn(line, "\r\n")] = 0;  // Remove newline
        if (strlen(line) == 0) continue;

        char *token = strtok(line, ",");
        if (token) {
            int id = atoi(token);
            if (id > last_id) last_id = id;
        }
    }

    fclose(file);
    return last_id;
}

