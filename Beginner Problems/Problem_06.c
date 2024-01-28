#include<stdio.h>


/*


Write a C program to check whether a triangle can be formed with the given values for the angles.

Test Data :
40 55 65
Expected Output :
The triangle is not valid.

*/
int main(){

int angle1, angle2, angle3, total;
printf("Enter the three angles of the triangle : ");
scanf("%d%d%d",&angle1,&angle2,&angle3);
total = angle1+angle2+angle3;
if(total==180){
    printf("The triangle is valid");
}
else{
    printf("The triangle is invalid");
}



    return 0;
}