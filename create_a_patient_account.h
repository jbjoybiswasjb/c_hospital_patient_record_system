#ifndef CREATE_A_PATIENT_ACCOUNT_H
#define CREATE_A_PATIENT_ACCOUNT_H

#include <string.h>

//Structure.
typedef struct
{
    int id;
    char name[50];
    int age;
    char new_password[10];
    char confirm_new_password[10];
} PatientInfo;

//Function prototype.
void createAPatientAccount(PatientInfo patient_info);


#endif // CREATE_A_PATIENT_ACCOUNT_H

