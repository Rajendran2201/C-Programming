#include<stdio.h>
int main(){

/* Write a C Program to find out whether a student is pass or fail

    It requires a total of 40% and at least 33% in each subject to pass 

    get the number of subjects and their marks from the user 

*/

int noOfSubjects,sum=0;
float totalPercentage;
printf("Enter the number of Subjects: ");
scanf("%d",&noOfSubjects);
int marks[noOfSubjects];

for(int i=1;i<noOfSubjects+1;i++){
    printf("\nEnter the mark of Subject-%d: ",i);
    scanf("%d",&marks[i-1]);
}

for(int i=0;i<noOfSubjects;i++){
    if(marks[i]<33){
        printf("You are fail");
        return 0;
    }
}

for(int i=0;i<noOfSubjects;i++){
    sum+=marks[i];
}

totalPercentage = sum / noOfSubjects;

if(totalPercentage<40){
    printf("You are fail");
}else{
    printf("You are pass");
}







    return 0;
}