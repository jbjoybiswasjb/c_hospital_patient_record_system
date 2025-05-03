#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LINE 256

// Header file.
#include "get_last_id_from_patient_info_csv.h"

// Get the last patient ID from patient_info.csv file.
int get_last_id(const char *filename)
{
     FILE *file = fopen(filename, "r");
     if (!file) return 0;

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
