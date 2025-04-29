#ifndef CREATE_A_PATIENT_ACCOUNT_H
#define CREATE_A_PATIENT_ACCOUNT_H

//Structure.
typedef struct
{
    int id;
    char name[50];
    int age;
    int mobile_number;
    char newPassword[10];
    char ReEnteredNewPassword[10];
} PatientInfo;

//Function prototype.
void createAPatientAccount(PatientInfo patientInfo);


#endif // CREATE_A_PATIENT_ACCOUNT_H

