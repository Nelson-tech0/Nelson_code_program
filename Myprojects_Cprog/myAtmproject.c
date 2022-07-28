#include <stdio.h>

unsigned long amount = 10000, deposit, withdrawal, transfer, send, pinchange;
int pin, select, k, account, accountpin, bank, trf, newpin, type, age, bvn;
char transaction = 'y';
char name[] = "Nelson";
char name1[] = "Hilary";
char sign = 'N';
char first_name[50];
char last_name[50];
char address[50];
char occupation[50];
char email[50];
char kin[100];

void main()
{
    while (pin != 2023)
    {
        printf("\n\n********** HELLO! WELCOME TO ACCESS BANK PLC **********\n");
        printf("******************* ATM BANKING ************************");
        printf("\n\n>>>> Dear %s %s, Welcome <<<<<\n", name, name1);
        printf("\n\nPlease enter your pin: ");
        scanf("%d", &pin);
        if(pin != 2023)
        {
            printf("Incorrect Pin, please try again\n");
        }
    }
    do
    {
        printf(">>>>> 1. Check account balance >>>>>\n");
        printf(">>>>> 2. Cash Withdrawal >>>>>\n");
        printf(">>>>> 3. Cash Deposit >>>>>\n");
        printf(">>>>> 4. Fund Transfer >>>>>\n");
        printf(">>>>> 5. Pin Change >>>>>\n");
        printf(">>>>> 6. Account Opening >>>>>\n");
        printf(">>>>> 7. Exit >>>>>\n");
        printf("\n\nPlease select from the options above: ");
        scanf("%d", &select);
        switch (select)
        {
        case 1:
        printf("\n\nDear %s %s, You account balance is: %c%lu", name, name1, sign, amount);
            break;
        case 2:
        printf("Please enter the amount you wish to withdraw: ");
        scanf("%lu", &withdrawal);
        printf("\n\nDear %s %s, You have successfully withdrawn %c%lu from your account\n", name,name1, sign, withdrawal);
        if(withdrawal % 100 != 0)
        {
            printf("\n\nPlease enter amount in multiples of 100");
        }else if(withdrawal > amount)
        {
            printf("\n\nInsufficient fund");
        }else{
            amount = amount - withdrawal;
            printf("\n\nYour new account balance is: %c%lu", sign, amount);
        }
            break;
        case 3:
        printf("\n\nPlease enter the amount you wish to deposit: ");
        scanf("%lu", &deposit);
        printf("\n\nDear %s %s, you have successfully deposited %c%lu into your account\n", name, name1, sign, amount);
        amount = amount + deposit;
        printf("\n\nYour new balance is: %c%lu", sign, amount);
            break;
        case 4:
            printf("***** 1. Transfer to Access bank *****\n");
            printf("***** 2. Transfer to other bank *****\n");
            printf("***** 3. Exit ******\n");
            printf("\n\nPlease select options: ");
            scanf("%d", &account);
            switch (account)
            {
            case 1:
            printf("Please enter the account number: ");
            scanf("%d", &account);
            printf("Enter amount: ");
            scanf("%lu", &send);
            amount = amount - send; 
            printf("Your new balance is %c%lu\n", sign, amount);
            printf("Enter recipient's name: ");
            scanf("%s %s", &first_name, &last_name);
            if(account == 12345)
            {
                printf("Enter your account pin: ");
                scanf("%d", &accountpin);
                if(accountpin == 2023){
                    printf("\n\n>>>>> Transfer successful >>>>>>\n");
                    printf("\n\n>>>>> Dear %s %s, your transfer to %s %s was successful >>>>>\n", name,name1, first_name, last_name);
                }else
                {
                    printf(">>>> Transfer Unsuccessful >>>>\n\n>>>> Invalid pin >>>>>\n");
                }
                }else
                {
                    printf("\n\n>>>>> This account number is not associated with an Access Bank code, please try again >>>>\n");
                }
                    break;
                case 2: 
                printf(">>>>> Choose Bank >>>>>>\n");
                printf(">>>> 1. Fidelity bank >>>>>\n");
                printf(">>>> 2. Kuda bank >>>>>\n");
                printf(">>>> 3. Zenith bank >>>>>\n");
                printf(">>>> 4. Stanbic bank >>>>>\n");
                printf(">>>> 5. Union bank >>>>>\n");
                printf(">>>> 6. Polaris bank >>>>>\n");
                printf(">>>> 7. First bank >>>>>\n");
                printf(">>>> 8. FCMB >>>>>\n");
                printf(">>>> 9. United bank for Africa >>>>>\n");
                printf(">>>> 10. Guaranty Trust Holding Company Plc >>>>>\n");
                printf("Please choose the bank you would like to make a transfer\n");
                scanf("%d", &bank);
                switch (bank)
                {
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 6:
                case 7:
                case 8:
                case 9:
                case 10:
                            printf("Please enter account number: ");
                            scanf("%d", &account);
                            if(account)
                            {
                                printf("proceed\n");
                            }
                            printf("Enter amount: ");
                            scanf("%lu", &send);
                            amount = amount - send; 
                            printf("Your new balance is %c%lu\n", sign, amount);
                            printf("Enter beneficiary name: ");
                            scanf("%s %s", &first_name, &last_name);
                            printf("Enter account pin: ");
                            scanf("%d", &accountpin);
                            if(accountpin == 2023)
                            {
                                printf("<<<< Dear %s %s, your transfer to %s %s was successful >>>>", name, name1, first_name, last_name);
                            }else{
                                printf("Invalid pin\n");
                            }
                                break;
                            
                            default:
                            printf("Invalid input!!!");
                                break;
                            }
                                break;
                        }
                            break;
        case 5:
        printf("Enter previous pin: ");
        scanf("%d", &pin);
        if(pin != 2023){
            printf("Invalid Pin\n");
            break;
        }
        printf("Enter new pin: ");
        scanf("%d", &newpin);
        printf("\n\nDear %s %s, Your pin has been successfully changed", name, name1);
            break;
        case 6:
        printf(">>>>> 1. Savings account >>>>>\n");
        printf(">>>>> 2. Checking account >>>>>\n\n");
        printf("Please choose account type: ");
        scanf("%d", &type);
        switch (type)
        {
        case 1:
        printf("Please fill the form below\n\n");
        printf("First name: ");
        scanf("%s", first_name);
        printf("Last name: ");
        scanf("%s", &last_name);
        printf("Address: ");
        scanf("%s", &address);
        printf("Age: ");
        scanf("%d", &age);
        if(age <= 18)
        {
            printf("Dear %s %s, You are not eligible to open an account yet!", first_name, last_name);
            break;
        }
        printf("Email: ");
        scanf("%s", &email);
        printf("Occupation: ");
        scanf("%s", &occupation);
        printf("Next of Kin: ");
        scanf("%s", &kin);
        printf("BVN: ");
        scanf("%d", &bvn);
        if(bvn != 2025)
        {
            printf("incorrect bvn pin.\n");
            printf("Enter a correct bvn pin: ");
            scanf("%d", &bvn);
            printf(">>>> BVN authorization >>>>>\n\n");
        }
        printf("\n\nProfile:\nfirstname: %s\nlastname: %s\naddress: %s\nage: %d\nemail: %s\noccupation: %s\nkin: %s\nbvn: %d\n", first_name, last_name, address, age, email, occupation, kin, bvn);
        printf("\n");
        printf("\n\n \t\t******** Creating account ********* ");
        printf("\n\nNew account number: 20901234\n");
        printf("\n\nDear %s %s, your Savings account has been successfully created! Thank you for choosing Access bank plc.\n", first_name, last_name);
            break;
        default:
        printf("invalid selection.\n");
            break;
        case 2:
        printf("Please fill the form below\n\n");
        printf("First name: ");
        scanf("%s", first_name);
        printf("Last name: ");
        scanf("%s", &last_name);
        printf("Address: ");
        scanf("%s", &address);
        printf("Age: ");
        scanf("%d", &age);
        if(age <= 18)
        {
            printf("Dear %s %s, You are not eligible to open an account yet!", first_name, last_name);
            break;
        }
        printf("Email: ");
        scanf("%s", &email);
        printf("Occupation: ");
        scanf("%s", &occupation);
        printf("Next of Kin: ");
        scanf("%s", &kin);
        printf("BVN: ");
        scanf("%d", &bvn);
        if(bvn != 2025)
        {
            printf("incorrect bvn pin.\n");
            printf("Enter a correct bvn pin: ");
            scanf("%d", &bvn);
            printf(">>>> BVN authorization >>>>>");
        }
        printf("\n\nProfile:\nfirstname: %s\nlastname: %s\naddress: %s\nage: %d\nemail: %s\noccupation: %s\nkin: %s\nbvn: %d\n", first_name, last_name, address, age, email, occupation, kin, bvn);
        printf("\n");
        printf("\n\n \t\t******** Creating account ********* ");
        printf("\n\nNew account number: 21345690\n");
        printf("\n\nDear %s %s, your checking account has been successfully created! Thank you for choosing Access bank plc.\n", first_name, last_name);
            break;
        }
        case 7:
        printf("\n\nDear %s %s! Thank you for banking with us!", name, name1);
            break;
        default:
        printf("\n\nInvalid input");
            break;
        }
        if(transaction == 'n' || transaction == 'N')
        {
            k = 1;
        }
        printf("\n\nWould you like to perform another transaction?(y/n): ");
        fflush(stdin);
        scanf("%c", &transaction);
    } while (!k);
    printf("\n\nDear %s %s, Thank you for choosing Access bank. Goodbye!", name, name1);   
}