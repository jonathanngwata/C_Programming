#include <stdio.h>
#include <string.h>

int main() {
    int weekDays;
    printf("Enter day of by number:");
    scanf("%d",&weekDays);
    switch(weekDays){
        case 1:
            
                if(weekDays == 1)
                printf("Its friday");
        break;
        
        case 2:
            if(weekDays == 2)
            printf("Its Tuesday");
        break;
        
        case 3:
            if(weekDays == 3)
            printf("Its wednesday");
        break;
        
        case 4:
            if(weekDays == 4)
            printf("Its Thursday ");
        break;
        
        case 5:
            if(weekDays == 5)
            printf("Its friday");
        
        case 6:
            if(weekDays == 6)
            printf("Its Saturday");
        break;
        case 7:
            if(weekDays == 7)
            printf("Its sunday");
        break;
        
        default:
            printf("Sorry u entered out of scope value\n");
        break;
    }

    return 0;
}
