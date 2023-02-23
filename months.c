#include <stdio.h>
int main() {
        int a;
        printf("Plese Enter number:\n ");
        scanf("%d", &a);
switch (a) {
    case 1:
        printf("MONTH ACCORDING TO ENTERED NUMBER IS JANUARY\n");
    break;
	case 2:
        printf("MONTH ACCORDING TO ENTERED NUMBER IS FEBRUARY\n");
    break;    
	case 3:
        printf("MONTH ACCORDING TO ENTERED NUMBER IS MARCH\n");
    break; 
	case 4:
        printf("MONTH ACCORDING TO ENTERED NUMBER IS APRIL\n");
    break; 
	case 5:
        printf("MONTH ACCORDING TO ENTERED NUMBER IS MAY\n");
    break; 
	case 6:
        printf("MONTH ACCORDING TO ENTERED NUMBER IS JUNE\n");
    break; 
	case 7:
        printf("MONTH ACCORDING TO ENTERED NUMBER IS JULY\n");
    break; 
	case 8:
        printf("MONTH ACCORDING TO ENTERED NUMBER IS AUGUST\n");
    break; 
	case 9:
        printf("MONTH ACCORDING TO ENTERED NUMBER IS SEPTEMBER\n");
    break; 
	case 10:
        printf("MONTH ACCORDING TO ENTERED NUMBER IS OCTOBER\n");
    break; 
	case 11:
        printf("MONTH ACCORDING TO ENTERED NUMBER IS NOVEMBER\n");
    break; 	
	case 12:
        printf("MONTH ACCORDING TO ENTERED NUMBER IS DECEMBER\n");
    break; 	           
    default:
        printf("INVALID INPUT PLEASE TRY AGAIN\n");
    break;
}
    return 0;
}