#include <stdio.h>
#include <string.h>

struct Profile
{
    char email[100];
    int phone_number;
    char first_name[20];
    char middle_name[30];
    char last_name[20];
    char Date_of_birth[20];
    int age;
    char class_of_degree[50];
    char course_of_study[100];
    int year_of_graduation;
    char NYSC[40];
    char attach_cv_pdf_files[60];
    char address[30];
};

int main()
{
    struct Profile profile1;
    {
        strcpy(profile1.email, "Hilary.nelsonn@yahoo.com");
        printf("EMAIL: ");
        scanf("%s", &profile1.email);

        profile1.phone_number;
        printf("PHONE_NUMBER: ");
        scanf("%d", &profile1.phone_number);

        strcpy(profile1.first_name, "Nelson");
        printf("FIRST_NAME: ");
        scanf("%s", &profile1.first_name);

        strcpy(profile1.middle_name, "Chibuike");
        printf("MIDDLE_NAME: ");
        scanf("%s", &profile1.middle_name);

        strcpy(profile1.last_name, "Nelson");
        printf("LAST_NAME: ");
        scanf("%s", &profile1.last_name);

        strcpy(profile1.Date_of_birth, "2/09/90");
        printf("DATE_OF_BIRTH: ");
        scanf("%s", &profile1.Date_of_birth);

        profile1.age;
        printf("AGE: ");
        scanf("%d", &profile1.age);

        strcpy(profile1.class_of_degree, "second_class_upper");
        printf("CLASS_OF_DEGREE: ");
        scanf("%s", &profile1.class_of_degree);

        strcpy(profile1.course_of_study, "Banking_and_Finance");
        printf("COURSE_OF_STUDY: ");
        scanf("%s", &profile1.course_of_study);

        profile1.year_of_graduation;
        printf("YEAR OF GRADUATION: ");
        scanf("%s", &profile1.year_of_graduation);

        strcpy(profile1.NYSC, "Yes");
        printf("HAVE YOU COMPLETED YOUR NYSC: y/n");
        scanf("%s", &profile1.NYSC);

        strcpy(profile1.attach_cv_pdf_files, "pdf");
        printf("UPLOAD CV: ");
        scanf("%s", &profile1.attach_cv_pdf_files);

        strcpy(profile1.address, "6, Ojo, Lagos");
        printf("ADDRESS: ");
        scanf("%s", &profile1.address);
    };
    printf("Dear %s %s, Thank you for taking out time to fill this form, Your application has been successfully submitted\n", profile1.first_name, profile1.last_name);
    return 0;    
}



