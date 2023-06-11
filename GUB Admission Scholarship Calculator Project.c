#include<stdio.h>

int main()

{
    double total_fee;
    int per_credit_fee;
    int scholarship_percentage;
    double total_GPA;
    int departmentCode, per_credit;

    int registration_fee, admission_fee, library_it_fee, form_id_scholarship_fee;  //fixed value

    registration_fee = 6000;
    admission_fee = 20000;
    library_it_fee = 3000;
    form_id_scholarship_fee = 1500;


    printf("Welcome to the GUB Admission Scholarship Calculator\n");
    printf("\nPlease select your department which you want to admit:\n");
    printf("1. Computer Science\n");
    printf("2. Electrical Engineering\n");
    printf("3. Textile Engineering\n");
    printf("4. BBA\n");
    printf("5. LLB\n");
    printf("6. Journalism & Media Communication\n");
    printf("7. English\n");
    printf("8. Sociology\n");
    printf("\nEnter the department code: ");
    scanf("%d", &departmentCode); //taking input about department


    // Assigning per credit fee based on the selected department using switch statement
    switch (departmentCode)

    {
        case 1:
            per_credit_fee = 3900;
            per_credit = 144;
            break;

        case 2:
            per_credit_fee = 3000;
            per_credit = 144;
            break;

        case 3:
            per_credit_fee = 2650;
            per_credit = 161;
            break;

        case 4:
            per_credit_fee = 3200;
            per_credit = 140;
            break;

        case 5:
            per_credit_fee = 4000;
            per_credit = 140;
            break;

        case 6:
            per_credit_fee = 2200;
            per_credit = 141;
            break;

        case 7:
            per_credit_fee = 2400;
            per_credit = 141;
            break;

        case 8:
            per_credit_fee = 1550;
            per_credit = 140;
            break;


        default:
            printf("Invalid department code. Try agian.\n");
            return 0;
    }


    printf("Please enter the total GPA: ");
    scanf("%lf", &total_GPA);


    // Calculating the scholarship percentage based on the total GPA
    if (total_GPA == 10.0)
    {
        scholarship_percentage = 30.0;
        printf ("\nYou will get 30 percent scholarship.");
    }

    else if (total_GPA >= 8.0 && total_GPA <= 9.99)
    {
        scholarship_percentage = 20.0;
        printf ("\nYou will get 20 percent scholarship.");
    }

    else if (total_GPA >= 7.0 && total_GPA <= 7.99)
    {
        scholarship_percentage = 10.0;
        printf ("\nYou will get 10 percent scholarship.");
    }

    else
    {
        scholarship_percentage = 0.0;
        printf ("\nSorry! no scholarship is available.");
    }


    // Calculating the per credit fee after scholarship
    per_credit_fee = per_credit_fee - ((per_credit_fee * scholarship_percentage) / 100);

    // Calculating the total fee after scholarship
    total_fee = (per_credit_fee * per_credit) + (registration_fee * 8) + admission_fee + (library_it_fee * 8) + form_id_scholarship_fee;


    printf ("\n\nTotal Fee after Scholarship is: %lf BDT", total_fee);

    return 0;
}
