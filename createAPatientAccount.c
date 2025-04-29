#include <stdio.h>
#include <string.h>

// Header file.
#include "create_a_patient_account.h"

void createAPatientAccount(PatientInfo patient_info)
{
    printf("\nEnter your ID: ");
    scanf("%d", &patient_info.id);
    printf("Enter your Full Name: ");
    while(getchar() != '\n');
    scanf("%[^\n]s", patient_info.name);
    printf("Enter your Age: ");
    scanf("%d", &patient_info.age);
    printf("Enter your Mobile Number: ");
    scanf("%d", &patient_info.mobile_number);
    printf("Enter your new password withouspace: ");
    scanf("%s", patient_info.new_password);
    printf("Confirm your new password withouspace: ");
    scanf("%s", patient_info.confirm_new_password);

    printf("\n%d %s %d %d %s %s\n", patient_info.id, patient_info.name, patient_info.age, patient_info.mobile_number, patient_info.new_password, patient_info.confirm_new_password);
};

