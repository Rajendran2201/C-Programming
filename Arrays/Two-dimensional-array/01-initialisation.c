#include<stdio.h>
int main(){

  //initialisaing a 2-D array

//data_type array_name[row_size][col_size]
  int a3[3][3];

  //type 1 : Initialise with declration 
int a2[3][3] = {
  {1,2,3},
  {2,3,4},
  {5,6,7}
};

// type -2 : Using Index / Subscript 
int a1[3][3];
a1[0][0] = 2;
a1[0][1] = 3;



//type 3 - getting values from the user 

int a[3][3];

for(int i=0;i<3;i++){
  for(int j=0;j<3;j++){
      printf("Enter the value of a[%d][%d]: ",i,j);
      scanf("%d",&a[i][j]);
  }
}

  return 0;
}