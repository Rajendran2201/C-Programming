#include<stdio.h>
/*
    Write a C program to determine eligibility for admission to a professional course based on the following criteria: 

Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50 and Total in all three subject >=190 or Total in Maths and Physics >=140

the marks obtained in Physics :65
 the marks obtained in Chemistry :51
the marks obtained in Mathematics :72 
Total marks of Maths, Physics and Chemistry : 188 Total marks of Maths and Physics : 137

Expected Output :
The candidate is not eligible for admission.


*/
int main(){

int mathematics, physics, chemistry, total , subtotal;
printf("The marks obtained in Physics: ");
scanf("%d",&physics);
printf("The marks obtained in Chemistry: ");
scanf("%d",&chemistry);
printf("The marks obtained in Mathematics: ");
scanf("%d",&mathematics);

total = mathematics+physics+chemistry;
subtotal = mathematics+physics;

if(mathematics>=65 && physics>=55 && chemistry>=50){
    if(total >=190 || subtotal >=140){
        printf("You're eligible for admission");
    }else{
        printf("You're not eligible for admission");
    }
}else{
    printf("You're not eligible for admission");
}

    return 0;
}