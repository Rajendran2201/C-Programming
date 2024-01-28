#include<stdio.h>

/*

Write a C program to read any day number in integer and display the day name in word format.
Test Data :
5
Expected Output :
Thursday


*/
int main(){

    int dayNumber;
    printf("Enter the number in integer: ");
    scanf("%d",&dayNumber);

    switch(dayNumber){

        case 1: 
            printf("Sunday");
            break;
        case 2: 
            printf("Monday");
            break;
        case 3: 
            printf("Tuesday");
            break;
        case 4: 
            printf("Wednesday");
            break;
        case 5: 
            printf("Thursday");
            break;
        case 6: 
            printf("Friday");
            break;
        case 7: 
            printf("Saturday");
            break;
        default:
            printf("Invalid input");

    }




    return 0;
}