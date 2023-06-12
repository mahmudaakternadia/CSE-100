//Development of GUB Admission Scholarship Calculator

#include<stdio.h>

int main()

{
    int total_cost;
    int per_credit_fee;
    int scholarship_percentage;
    double total_GPA;
    int department_no, total_credit;

    int registration_fee, admission_fee, library_it_fee, form_id_scholarship_fee;  //fixed value

    registration_fee = 6000;
    admission_fee = 20000;
    library_it_fee = 3000;
    form_id_scholarship_fee = 1500;


    printf("Welcome to the GUB Admission Scholarship Calculator\n");
    printf("\nPlease select your program which you want to admit:\n");
    printf("1. Computer Science and Engineering\n");
    printf("2. Electrical and Electronics Engineering\n");
    printf("3. Textile Engineering\n");
    printf("4. Bachelor of Business Administration\n");
    printf("5. Bachelor of Laws\n");
    printf("6. Journalism & Media Communication\n");
    printf("7. English\n");
    printf("8. Sociology\n");
    printf("\nEnter the department no:");
    scanf("%d", &department_no); //taking input about department


    // Assigning per credit fee based on the selected department using switch statement
    switch (department_no)

    {
        case 1:     //CSE
            per_credit_fee = 3900;
            total_credit = 144;
            printf ("\nTotal cost for Computer Science program is 655100 BDT.");
            break;

        case 2:     //EEE
            per_credit_fee = 3000;
            total_credit = 144;
            printf ("\nTotal cost for Electrical and Electronics Engineering program is 525500 BDT.");
            break;

        case 3:     //Textile
            per_credit_fee = 2650;
            total_credit = 161;
            printf ("\nTotal cost for Textile Engineering program is 520150 BDT.");
            break;

        case 4:     //BBA
            per_credit_fee = 3200;
            total_credit = 140;
            printf ("\nTotal cost for Bachelor of Business Administration program is 541500 BDT.");
            break;

        case 5:     //LLB
            per_credit_fee = 4000;
            total_credit = 140;
            printf ("\nTotal cost for Bachelor of Laws program is 653500 BDT.");
            break;

        case 6:     //JMC
            per_credit_fee = 2200;
            total_credit = 141;
            printf ("\nTotal cost for Journalism & Media Communication program is 403700 BDT.");
            break;

        case 7:     //English
            per_credit_fee = 2400;
            total_credit = 141;
            printf ("\nTotal cost for English program is 431900 BDT.");
            break;

        case 8:     //Sociology
            per_credit_fee = 1550;
            total_credit = 140;
            printf ("\nTotal cost for Sociology program is 310500 BDT.");
            break;


        default:
            printf("\nInvalid department no. Follow the instruction.\n");
            return 0;
    }


    printf("\n\nPlease enter the total GPA: ");
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
    total_cost = (per_credit_fee * total_credit) + (registration_fee * 8) + admission_fee + (library_it_fee * 8) + form_id_scholarship_fee;


    printf ("\n\nTotal cost after Scholarship is: %d BDT.", total_cost);

    return 0;
}
