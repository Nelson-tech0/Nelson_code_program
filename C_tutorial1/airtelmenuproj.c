#include <stdio.h>

int main()
{
    printf("Enter code: ");
    int code;
    scanf("%d", &code);
    if(code == 141)
    {
        printf("Choose from the Airtel menu options\n");
        printf("1. My offer\n");
        printf("2. Data Bundles\n");
        printf("3. N1500/6GB /7days\n");
        printf("4. Family plan/ Monthly+\n");
        printf("5. Everyday ON\n");
        printf("6. Super Binge\n");
        printf("7. Social Bundle\n");
        printf("8. Gift & Sharing\n");
        printf("11. \tNext\n");
    int airtel;
    scanf("%d", &airtel);
    if(airtel == 1)
    {
        printf("1. 500MB/N100/7Dys\n");
        printf("2. 1GB/N200/7Dys\n");
        printf("3. 1.5GB/N300/7Dys\n");
        printf("4. 5GB/N1000/14Dys\n");
        printf("\tReply\n");
        printf("\t22. Back\n");
        printf("\t00. Menu\n");
        int Reply;
        scanf("%d", &Reply);
        if(Reply == 1)
        {
            printf("\t500MB for 7days at N100.\nWhat should happen when your bundle finshes?\n1. Continue browsing from airtime / 160MB Extra\n2. Stop my data\n\tReply\n");
            int cont;
            scanf("%d", &cont);
            if(cont == 1)
            {
                printf("Dear customer, you do not have sufficient airtime to buy this bundle. Please recharge and try again or Dail *500# to BORROW DATA and Pay Back Later.\n");
            }else if(cont == 2)
            {
                printf("your subscription to 500MB for 7days has been activated..Enjoy your data Bundle.\n");
            }else
            {
                printf("You have entered an Invalid input\n");
            }
        }else if(Reply == 2)
        {
            printf("\t1GB for 7days at N200.\nWhat should happen when your bundle finshes?\n1. Continue browsing from airtime / 160MB Extra\n2. Stop my data\n\tReply\n");
            int cont;
            scanf("%d", &cont);
            if(cont == 1)
            {
                printf("Dear customer, you do not have sufficient airtime to buy this bundle. Please recharge and try again or Dail *500# to BORROW DATA and Pay Back Later.\n");
            }else if(cont == 2)
            {
                printf("your subscription to 1GB for 7days has been activated..Enjoy your data Bundle.\n");
            }else
            {
                printf("You have entered an Invalid input\n");
            }
        }else if(Reply == 3)
        {
            printf("\t1.5GB for 7days at N300.\nWhat should happen when your bundle finshes?\n1. Continue browsing from airtime / 160MB Extra\n2. Stop my data\n\tReply\n");
            int cont;
            scanf("%d", &cont);
            if(cont == 1)
            {
                printf("Dear customer, you do not have sufficient airtime to buy this bundle. Please recharge and try again or Dail *500# to BORROW DATA and Pay Back Later.\n");
            }else if(cont == 2)
            {
                printf("your subscription to 1.5GB for 7days has been activated..Enjoy your data Bundle.\n");
            }else
            {
                printf("You have entered an Invalid input\n");
            }
        }else if(Reply == 4)
        {
            printf("\t5GB for 14days at N1000.\nWhat should happen when your bundle finshes?\n1. Continue browsing from airtime / 160MB Extra\n2. Stop my data\n\tReply\n");
            int cont;
            scanf("%d", &cont);
            if(cont == 1)
            {
                printf("Dear customer, you do not have sufficient airtime to buy this bundle. Please recharge and try again or Dail *500# to BORROW DATA and Pay Back Later.\n");
            }else if(cont == 2)
            {
                printf("your subscription to 5GB for 14days has been activated..Enjoy your data Bundle.\n");
            }else
            {
                printf("You have entered an Invalid input\n");
            }
        }else if(Reply == 22)
        {
                printf("Choose from the Airtel menu options\n");
                printf("1. My offer\n");
                printf("2. Data Bundles\n");
                printf("3. N1500/6GB /7days\n");
                printf("4. Family plan/ Monthly+\n");
                printf("5. Everyday ON\n");
                printf("6. Super Binge\n");
                printf("7. Social Bundle\n");
                printf("8. Gift & Sharing\n");
                printf("11. \tNext\n");

                int airtel;
                scanf("%d", &airtel);
                if(airtel == 1)
                {
                    printf("1. 500MB/N100/7Dys\n");
                    printf("2. 1GB/N200/7Dys\n");
                    printf("3. 1.5GB/N300/7Dys\n");
                    printf("4. 5GB/N1000/14Dys\n");
                    printf("\tReply\n");

                    int Reply;
                    scanf("%d", &Reply);
                    if(Reply == 1)
                {
                    printf("\t500MB for 7days at N100.\nWhat should happen when your bundle finshes?\n1. Continue browsing from airtime / 160MB Extra\n2. Stop my data\n\tReply\n");
                    
                    int cont;
                    scanf("%d", &cont);
                    if(cont == 1)
                    {
                        printf("Dear customer, you do not have sufficient airtime to buy this bundle. Please recharge and try again or Dail *500# to BORROW DATA and Pay Back Later.\n");
                    }else if(cont == 2)
                    {
                        printf("your subscription to 500MB for 7days has been activated..Enjoy your data Bundle.\n");
                    }else
                    {
                        printf("You have entered an Invalid input\n");
                    }
                }else if(Reply == 2)
                {
                    printf("\t1GB for 7days at N200.\nWhat should happen when your bundle finshes?\n1. Continue browsing from airtime / 160MB Extra\n2. Stop my data\n\tReply\n");
                    
                    int cont;
                    scanf("%d", &cont);
                    if(cont == 1)
                    {
                        printf("Dear customer, you do not have sufficient airtime to buy this bundle. Please recharge and try again or Dail *500# to BORROW DATA and Pay Back Later.\n");
                    }else if(cont == 2)
                    {
                        printf("your subscription to 1GB for 7days has been activated..Enjoy your data Bundle.\n");
                    }else
                    {
                        printf("You have entered an Invalid input\n");
                    }
                }else if(Reply == 3)
                {
                    printf("\t1.5GB for 7days at N300.\nWhat should happen when your bundle finshes?\n1. Continue browsing from airtime / 160MB Extra\n2. Stop my data\n\tReply\n");
                    
                    int cont;
                    scanf("%d", &cont);
                    if(cont == 1)
                    {
                        printf("Dear customer, you do not have sufficient airtime to buy this bundle. Please recharge and try again or Dail *500# to BORROW DATA and Pay Back Later.\n");
                    }else if(cont == 2)
                    {
                        printf("your subscription to 1.5GB for 7days has been activated..Enjoy your data Bundle.\n");
                    }else
                    {
                        printf("You have entered an Invalid input\n");
                    }
                }else if(Reply == 4)
                {
                    printf("\t5GB for 14days at N1000.\nWhat should happen when your bundle finshes?\n1. Continue browsing from airtime / 160MB Extra\n2. Stop my data\n\tReply\n");
                    
                    int cont;
                    scanf("%d", &cont);
                    if(cont == 1)
                    {
                        printf("Dear customer, you do not have sufficient airtime to buy this bundle. Please recharge and try again or Dail *500# to BORROW DATA and Pay Back Later.\n");
                    }else if(cont == 2)
                    {
                        printf("your subscription to 5GB for 14days has been activated..Enjoy your data Bundle.\n");
                    }else
                    {
                        printf("You have entered an Invalid input\n");
                    }
                }
                }
        }else if(Reply == 00)
        {
            printf("Choose from the Airtel menu options\n");
            printf("1. My offer\n");
            printf("2. Data Bundles\n");
            printf("3. N1500/6GB /7days\n");
            printf("4. Family plan/ Monthly+\n");
            printf("5. Everyday ON\n");
            printf("6. Super Binge\n");
            printf("7. Social Bundle\n");
            printf("8. Gift & Sharing\n");
            printf("11. \tNext\n");

            int airtel;
            scanf("%d", &airtel);
            if(airtel == 1)
            {
                printf("1. 500MB/N100/7Dys\n");
                printf("2. 1GB/N200/7Dys\n");
                printf("3. 1.5GB/N300/7Dys\n");
                printf("4. 5GB/N1000/14Dys\n");
                printf("\tReply\n");

                int Reply;
                scanf("%d", &Reply);
                if(Reply == 1)
                {
                    printf("\t500MB for 7days at N100.\nWhat should happen when your bundle finshes?\n1. Continue browsing from airtime / 160MB Extra\n2. Stop my data\n\tReply\n");
                    int cont;
                    scanf("%d", &cont);
                    if(cont == 1)
                    {
                        printf("Dear customer, you do not have sufficient airtime to buy this bundle. Please recharge and try again or Dail *500# to BORROW DATA and Pay Back Later.\n");
                    }else if(cont == 2)
                    {
                        printf("your subscription to 500MB for 7days has been activated..Enjoy your data Bundle.\n");
                    }else
                    {
                        printf("You have entered an Invalid input\n");
                    }
                }else if(Reply == 2)
                {
                    printf("\t1GB for 7days at N200.\nWhat should happen when your bundle finshes?\n1. Continue browsing from airtime / 160MB Extra\n2. Stop my data\n\tReply\n");
                    int cont;
                    scanf("%d", &cont);
                    if(cont == 1)
                    {
                        printf("Dear customer, you do not have sufficient airtime to buy this bundle. Please recharge and try again or Dail *500# to BORROW DATA and Pay Back Later.\n");
                    }else if(cont == 2)
                    {
                        printf("your subscription to 1GB for 7days has been activated..Enjoy your data Bundle.\n");
                    }else
                    {
                        printf("You have entered an Invalid input\n");
                    }
                }else if(Reply == 3)
                {
                    printf("\t1.5GB for 7days at N300.\nWhat should happen when your bundle finshes?\n1. Continue browsing from airtime / 160MB Extra\n2. Stop my data\n\tReply\n");
                    int cont;
                    scanf("%d", &cont);
                    if(cont == 1)
                    {
                        printf("Dear customer, you do not have sufficient airtime to buy this bundle. Please recharge and try again or Dail *500# to BORROW DATA and Pay Back Later.\n");
                    }else if(cont == 2)
                    {
                        printf("your subscription to 1.5GB for 7days has been activated..Enjoy your data Bundle.\n");
                    }else
                    {
                        printf("You have entered an Invalid input\n");
                    }
                }else if(Reply == 4)
                {
                    printf("\t5GB for 14days at N1000.\nWhat should happen when your bundle finshes?\n1. Continue browsing from airtime / 160MB Extra\n2. Stop my data\n\tReply\n");
                    int cont;
                    scanf("%d", &cont);
                    if(cont == 1)
                    {
                        printf("Dear customer, you do not have sufficient airtime to buy this bundle. Please recharge and try again or Dail *500# to BORROW DATA and Pay Back Later.\n");
                    }else if(cont == 2)
                    {
                        printf("your subscription to 5GB for 14days has been activated..Enjoy your data Bundle.\n");
                    }else
                    {
                        printf("You have entered an Invalid input\n");
                    }
            }
            }
        }else{
            printf("Invalid input option. Go back to the main page\n");
        }
        }else if(airtel == 2)
        {
            printf("1. Daily/Weekly Bundles\n");
            printf("2. Weekly Bundles\n");
            printf("3. Monthly Bundles\n");
            printf("4. Data++\n");
            printf("5. Mega Bundles\n");
            printf("6. Big data plans\n");
            printf("7. Everyday ON Plans\n");
            printf("\t11. Next\n");
            printf("\t22. Back\n");
            printf("\t0. Menu\n");

            int response;
            scanf("%d", &response);
            if(response == 1)
            {
                printf("1. N50/40MB/Daily\n");
                printf("2. N100/100MB/Daily\n");
                printf("3. N200/200MB/Daily\n");
                printf("4. N300/350MB/7dys\n");
                printf("5. N500/750MB/14dys\n");
                printf("6. N300/1GB/Daily\n");
                printf("7. N500/2GB/Daily\n");
                printf("\t11. Next\n");
                printf("\t22. Back\n");
                printf("\t0. Menu\n");

                int Reply;
                scanf("%d", &Reply);
                if(Reply == 1)
                {
                    printf("\t40MB for 1day at N50.\nWhat should happen when your bundle finshes?\n1. Continue browsing from airtime / 160MB Extra\n2. Stop my data\n\tReply\n");
                    int cont;
                    scanf("%d", &cont);
                    if(cont == 1)
                    {
                        printf("Dear customer, you do not have sufficient airtime to buy this bundle. Please recharge and try again or Dail *500# to BORROW DATA and Pay Back Later.\n");
                    }else if(cont == 2)
                    {
                        printf("your subscription to 40MB for 1day has been activated..Enjoy your data Bundle.\n");
                    }else
                    {
                        printf("You have entered an Invalid input\n");
                    }
                }else if(Reply == 2)
                {
                    printf("\t100MB for 1day at N100.\nWhat should happen when your bundle finshes?\n1. Continue browsing from airtime / 160MB Extra\n2. Stop my data\n\tReply\n");
                    int cont;
                    scanf("%d", &cont);
                    if(cont == 1)
                    {
                        printf("Dear customer, you do not have sufficient airtime to buy this bundle. Please recharge and try again or Dail *500# to BORROW DATA and Pay Back Later.\n");
                    }else if(cont == 2)
                    {
                        printf("your subscription to 100MB for 1day has been activated..Enjoy your data Bundle.\n");
                    }else
                    {
                        printf("You have entered an Invalid input\n");
                    }
                }else if(Reply == 3)
                {
                    printf("\t200MB for 1day at N200.\nWhat should happen when your bundle finshes?\n1. Continue browsing from airtime / 160MB Extra\n2. Stop my data\n\tReply\n");
                    int cont;
                    scanf("%d", &cont);
                    if(cont == 1)
                    {
                        printf("Dear customer, you do not have sufficient airtime to buy this bundle. Please recharge and try again or Dail *500# to BORROW DATA and Pay Back Later.\n");
                    }else if(cont == 2)
                    {
                        printf("your subscription to 200MB for 1day has been activated..Enjoy your data Bundle.\n");
                    }else
                    {
                        printf("You have entered an Invalid input\n");
                    }
                }else if(Reply == 4)
                {
                    printf("\t300MB for 7days at N350.\nWhat should happen when your bundle finshes?\n1. Continue browsing from airtime / 160MB Extra\n2. Stop my data\n\tReply\n");
                    int cont;
                    scanf("%d", &cont);
                    if(cont == 1)
                    {
                        printf("Dear customer, you do not have sufficient airtime to buy this bundle. Please recharge and try again or Dail *500# to BORROW DATA and Pay Back Later.\n");
                    }else if(cont == 2)
                    {
                        printf("your subscription to 300MB for 7days has been activated..Enjoy your data Bundle.\n");
                    }else
                    {
                        printf("You have entered an Invalid input\n");
                    }
                }else if(Reply == 5)
                {
                    printf("\t750MB for 14days at N500.\nWhat should happen when your bundle finshes?\n1. Continue browsing from airtime / 160MB Extra\n2. Stop my data\n\tReply\n");
                    int cont;
                    scanf("%d", &cont);
                    if(cont == 1)
                    {
                        printf("Dear customer, you do not have sufficient airtime to buy this bundle. Please recharge and try again or Dail *500# to BORROW DATA and Pay Back Later.\n");
                    }else if(cont == 2)
                    {
                        printf("your subscription to 750MB for 14days has been activated..Enjoy your data Bundle.\n");
                    }else
                    {
                        printf("You have entered an Invalid input\n");
                    }
                }else if(Reply == 6)
                {
                    printf("\t1GB for 1day at N300.\nWhat should happen when your bundle finshes?\n1. Continue browsing from airtime / 160MB Extra\n2. Stop my data\n\tReply\n");
                    int cont;
                    scanf("%d", &cont);
                    if(cont == 1)
                    {
                        printf("Dear customer, you do not have sufficient airtime to buy this bundle. Please recharge and try again or Dail *500# to BORROW DATA and Pay Back Later.\n");
                    }else if(cont == 2)
                    {
                        printf("your subscription to 1GB for 1day has been activated..Enjoy your data Bundle.\n");
                    }else
                    {
                        printf("You have entered an Invalid input\n");
                    }
                }else if(Reply == 7)
                {
                    printf("\t2GB for 1day at N500.\nWhat should happen when your bundle finshes?\n1. Continue browsing from airtime / 160MB Extra\n2. Stop my data\n\tReply\n");
                    int cont;
                    scanf("%d", &cont);
                    if(cont == 1)
                    {
                        printf("Dear customer, you do not have sufficient airtime to buy this bundle. Please recharge and try again or Dail *500# to BORROW DATA and Pay Back Later.\n");
                    }else if(cont == 2)
                    {
                        printf("your subscription to 2GB for 1day has been activated..Enjoy your data Bundle.\n");
                    }else
                    {
                        printf("You have entered an Invalid input\n");
                    }
                }else if(Reply == 11)
                {

                }else if(Reply == 22)
                {
                    printf("1. Daily/Weekly Bundles\n");
                    printf("2. Weekly Bundles\n");
                    printf("3. Monthly Bundles\n");
                    printf("4. Data++\n");
                    printf("5. Mega Bundles\n");
                    printf("6. Big data plans\n");
                    printf("7. Everyday ON Plans\n");
                }else if(Reply == 0)
                {
                    printf("Choose from the Airtel menu options\n");
                    printf("1. My offer\n");
                    printf("2. Data Bundles\n");
                    printf("3. N1500/6GB /7days\n");
                    printf("4. Family plan/ Monthly+\n");
                    printf("5. Everyday ON\n");
                    printf("6. Super Binge\n");
                    printf("7. Social Bundle\n");
                    printf("8. Gift & Sharing\n");
                    printf("11. \tNext\n");
                }
            }
        }
    }else{
        printf("Invalid input\nFor more assistance call 121 or visit our nearest customer care center for help\nThank you for choosing Airtel Service\n");
    }
            }