#include <stdio.h>

int main(){


/*

    The control instruction are of four types and they are as follows 

    1. Sequence controls 
    2. Decision controls
    3. loop controls
    4. Case controls 

*/
// let us write a C program to get an input from the user and check if the number given is divisible by 97 or not 

    int a,b;
    printf("Enter a number:");  //sequential controls
    scanf("%d",&a);

    if(a%97==0){    //decision controls
       printf("The given number is  divisible by 97\n");
    }else{
       printf("The given number is not divisible by 97");
    }


    for(int i=0;i<5;i++){       //loop controls 
        printf("The value of i is %d\n",i);
    }

     printf("Enter a number:");  //sequential controls
    scanf("%d",&b);

    switch(b){                  // case controls 
        case 1:
            printf("You entered 1");
            break;
        case 2:
         printf("You entered 2");
        break;
        case 3:
         printf("You entered 3");
        break;
        case 4:
        printf("You entered 4");
        break;
        case 5:
         printf("You entered 5");
        break;
        default:
        printf("You might have entered a number greater than 5");

    }



    return 0;
}