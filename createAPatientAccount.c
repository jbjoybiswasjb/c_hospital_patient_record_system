#include <stdio.h>
#include <string.h>

// Header file.
#include "create_a_patient_account.h"

// For type check C-11 feature.
#define TYPEOF(x) _Generic((x), \
    int: "int", \
    float: "float", \
    double: "double", \
    char: "char", \
    char*: "string", \
    default: "unknown" \
)

void createAPatientAccount(PatientInfo patient_info)
{
    // ID.
    static int next_id = 1; // static for auto id generation
    patient_info.id = next_id;
    next_id++;
    printf("\nPatient ID: %d\n", patient_info.id);

    // Name.
    while(getchar() != '\n');
    printf("Enter your Full Name: ");
    scanf("%[^\n]s", patient_info.name);

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

    printf("\n%d %s %d %s %s\n", patient_info.id, patient_info.name, patient_info.age, patient_info.new_password, patient_info.confirm_new_password);
};

