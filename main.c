#include <stdio.h>
#include <stdlib.h>

// For boolean value.
#include <stdbool.h>

// For string value.
#include <string.h>

// Header file.
#include "create_a_patient_account.h"


int main()
{
    // Welcome and print options.
    printf("\n Welcome to our hospital patient record system !!!\n");
    printf("\n 1. See doctor's list and appointment time \n 2. Create a patient account \n 3. Patient login \n 4. Admin login \n 5. Exit \n");


    // Exit value.
    bool isExit = false;
    while(!isExit)
    {
        // Input option.
        int option;
        printf("\nPlease enter an option: ");




        // Set a validation for only int variable.
        int isDigit = scanf("%d", &option);
        if(!isDigit){
            printf("\nPlease choose ONLY a single digit from the above option.\n");

            // While new line or user press enter and End Of File getchar() will read each char
            int character;
            while((character = getchar()) != '\n' && character != EOF){}

            continue; // For continue the loop and get option.
        }






        PatientInfo patient_info;
        switch(option)
        {
        case 1:
            printf("\nSee doctor's list and appointment time\n");
            break;
        case 2:
            createAPatientAccount(patient_info);
            break;
        case 3:
            printf("\nPatient login\n");
            break;
        case 4:
            printf("\nAdmin login\n");
            break;
        case 5:
            isExit = true;
            break;
        default:
            printf("\nPlease enter a valid option with single digit.\n");
            break;
        }
    }
    return 0;
}
