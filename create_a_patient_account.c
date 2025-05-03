#include <stdio.h>
#include <string.h>

// Header file.
#include "create_a_patient_account.h"

#define MAX_LINE 256

void createAPatientAccount(PatientInfo patient_info)
{
    // ID.
    // Get the last patient ID from patientInfo.csv file.
    int last_id = get_last_id(PATIENT_INFO);
    int next_id = last_id + 1;
    patient_info.id = next_id;

    // Name.
    while(getchar() != '\n');
    printf("\nEnter your Full Name: ");
    scanf("%[^\n]s", patient_info.name);
    while(!patient_info.name)
    {
        printf("\n== Wrong name. ==\n");
        printf("\nEnter your Full Name: ");
        scanf("%[^\n]s", patient_info.name);
    }

    // Age.
    printf("Enter your Age: ");
    scanf("%d", &patient_info.age);

    // New password.
    printf("Enter your new password without space: ");
    scanf("%s", patient_info.new_password);

    // Confirm new password.
    printf("Confirm your new password without space: ");
    scanf("%s", patient_info.confirm_new_password);

    while(strcmp(patient_info.new_password, patient_info.confirm_new_password) != 0 || strlen(patient_info.new_password) < 6)
    {
        printf("\n== Please match your password and password should be at least 6 character. ==\n");

        // New password.
        printf("\nEnter your new password without space: ");
        scanf("%s", patient_info.new_password);

        // Confirm new password.
        printf("Confirm your new password without space: ");
        scanf("%s", patient_info.confirm_new_password);
    }
    printf("\nSuccessfully created an account. Thank you !!!\n");




    // For save patient information in CSV file.
    FILE *file = fopen(PATIENT_INFO, "a");
    if (!file) {
        perror("\nError opening file\n");
        return;
    }
    fprintf(file, "%d,%s,%d,%s\n", patient_info.id, patient_info.name, patient_info.age, patient_info.new_password);

    fclose(file);
}

