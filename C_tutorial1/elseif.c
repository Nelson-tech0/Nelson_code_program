/*//doctors office
// 1. add a patient
// 2. view a patient
// 3. search patient
// 4. exit
#include <stdio.h>

int main()
{
    printf("Choose a menu option 1-4:\n");
    printf("1. add a patient:\n");
    printf("2. view a patient:\n");
    printf("3. search patient:\n");
    printf("4. exit:\n");

    int input;
    scanf("%d", &input);

    if(input == 1)
    {
        printf("Adding a patient:\n");   
    }else if(input == 2)
    {
        printf("Viewing patient:\n");
    }else if(input == 3)
    {
        printf("Searching patient:\n");
    }else if(input == 4)
    {
        printf("Exisitng...");
    }else{
        printf("Incorrect input");
    }
    return 0;
}

#include <stdio.h>

int main()
{
    printf("AGE DESCRIPTION ANALYSIS: \n");
    printf("1. a child\n");
    printf("2. an Adult\n");
    printf("3. a Senior adult\n");

    int age;
    scanf("%d", &age);

    switch (age)
    {
    case 1:
        printf("This is a child");
        break;
    case 2:
        printf("This is an Adult");
        break;
    case 3:
        printf("This is a seniorAdult");
        break;
    default:
        printf("Invalid input");
        break;
    }
    return 0;
}

#include <stdio.h>

int main()
{
    printf("How many slices of bread did you eat today: \n");
    printf("1. Diet planning\n");
    printf("2. Good consumption\n");
    printf("3. Bad consumption\n");
    printf("4. Worse off!\n");
    int slices;
    scanf("%d", &slices);
    int caloriesPerSlice = 250;
    int milk = 30 / 2;

    switch (slices)
    {
        case 1:
            printf("You did a great job, ");
            break;
        case 2:
            printf("You did an ok job, ");
            break;
        case 3:
            printf("You did a bad job! Try to eat 2 next time, ");
            break;
        case 4:
            printf("You are a disappointment, ");
            break;
        default:
            printf("Enjoy your heart disease, ");
        break;
    }
    printf("You had %d calories and you need %dlitres of milk.\n", caloriesPerSlice
     * slices, milk);
    return 0;
}

#include <stdio.h>

int main()
{
    printf("Choose from the menu displayed: \n");
    printf("1. Check Jamb status\n");
    printf("2. Jamb Registration number\n");
    printf("3. Admission Status\n");
    printf("4. Forgot password\n");

    int jamb;
    int num;
    scanf("%d", &jamb);

    switch (jamb)
    {
    case 1: 
        printf("Enter your jamb number: ", num);
        scanf("%d", &num);
        printf("Processing...\n", num);
        printf("No available date yet\n");
           break;
    case 2:
        printf("2022109234");
            break;
    case 3:
        printf("No Admission given yet");
            break;
    case 4:
        printf("An email will be sent to you for password reset.\n");
            break;
    default:
        printf("Invalid input option");
            break;
    }
    return 0;
}*/

#include <stdio.h>

int main()
{
    printf("Choose a menu option 1-4:\n");
    printf("1. add a patient:\n");
    printf("2. view a patient:\n");
    printf("3. search patient:\n");
    printf("4. exit:\n");

    int input;
    scanf("%d", &input);

    if(input == 1)
    {
        char name[20];
        printf("Enter new patient name: ");   
        scanf("%s", name);
        printf("%s has been succesfully added to the list.", name);
    }else if(input == 2)
    {
        char name[] = "james";
        printf("Enter patient's name to view: ");
        scanf("%s", name);
        if(name == "JAMES" || name == "james")
        {
            printf("Searching...\n");
            printf("One patient found (JAMES)/n");
        }else{
            printf("No result found\n");
        }
    }else if(input == 3)
    {
        char name[20];
        printf("Searching patient:\n");
        printf("Please enter patient name: ");
        scanf("%s", name);
        printf("Searching...\nOne result found\n");
    }else if(input == 4)
    {
        printf("Exisitng...");
        printf("Do you want to save changes?: Y/N\n");
        char q;
        getchar();
        scanf("%c", &q);
        if(q == 'Y' || q == 'y')
        {
            printf("Saving changes!\n");
        }else if(q == 'N' || q == 'n')
        {
            printf("Thank you for choosing us\n");

        }else{
            printf("Hacking dectected.... BOOM 1,2 3\n");
        }
    }else{
        printf("Incorrect input");
    }
    return 0;
}