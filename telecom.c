#include<stdio.h>

int main (){
printf("Welcome to D telecom company please follow instructions given below\n");
printf("Do choose any of given option\n");
printf("1.Best fit plan\n");
printf("2.My Tariff,Usage & Packs\n");
printf("3.Billing & Payment details\n");
printf("4.Manage Account\n");

    int a,b,c,d;
    printf("ENTER VALID INPUT :");
    scanf("%d",&a);
switch (a)
{
    case 1:
    printf("Hi! Pay Bills, Mnage multiple accounts, claim plan benefits & get the best deals on Vi APP!");
    break;
    case 2:
        printf("1.Internet Usage\n");
        printf("2.Activate Packs\n");
        printf("ENTER VALID INPUT :");
        scanf("%d",&b);
            switch (b)
            {
            case 1:
                printf("Your current internet usage is 0.75gb and 2.25gb is left");
            break;
            case 2:
                printf("1.100gb/10$\n");
                printf("2.150gb/13$\n");
                printf("3.200gb/15$\n");
            break;
            default:
                printf("INVALID INPUT PLEASE TRY AGAIN\n");
                break;
            }
    break;  
    case 3:
         printf("1.Billing Details\n");
         printf("2.Last 3 payment details\n");
         printf("3.Duplicate bill over email/courier\n");
         printf("4.Ebill password\n");
         printf("ENTER VALID INPUT :");
         scanf("%d",&c);
            switch(c){
                case 1:
                printf("Your bill is 30$\n");
                break;
                case 2:
                printf("Nov 2022:25$\nDec 2022:35$\nJan 2023:30$\n");
                break;
                case 3:
                printf("Bill has been sent to your register email\n");
                break;
                case 4:
                printf("Your ebill password has been sent to your register email\n");
                break;
                default:
                printf("INVALID INPUT PLEASE TRY AGAIN\n");
                break; 
            }
    break;    
    case 4:
         printf("1.Activate VAS\n");
         printf("2.Deactivate VAS\n");
         printf("3.Song Change\n");
         printf("4.PUK Number\n");
         printf("ENTER VALID INPUT :");
         scanf("%d",&d);
         switch (d)
         {
         case 1: 
         printf("Your VAS has been activated\n");
         break;
         case 2: 
         printf("Your VAS has been deactivated\n");
         break;
         case 3:
         printf("Your tune song has been changed\n");
         break;
         case 4:
         printf("Personal unblocking key is hwfygi246t6476g34g do not share it with anyone\n");
         break;
         
         default:
                printf("INVALID INPUT PLEASE TRY AGAIN\n");
         break;
         }
    break;    
        
    default:
    printf("INVALID INPUT PLEASE TRY AGAIN\n");
    break;
}
return 0;
}