//WAP to get two matrices from the user and a=print the sum of two matrices 
#include <stdio.h>

int main() {
  int a[3][3], b[3][3], c[3][3];

//getting values from the user 
for(int i=0;i<3;i++){
  for(int j=0;j<3;j++){
      printf("Enter the value of a[%d][%d]: ",i,j);
      scanf("%d",&a[i][j]);
  }
}

//getting values from the user 
for(int i=0;i<3;i++){
  for(int j=0;j<3;j++){
      printf("Enter the value of b[%d][%d]: ",i,j);
      scanf("%d",&b[i][j]);
  }
}

//adding elements of a and b 

for(int i=0;i<3;i++){
  for(int j=0;j<3;j++){
     c[i][j] = a[i][j] + b[i][j];
  }
}



//printing the vealues 
for(int i=0;i<3;i++){
  for(int j=0;j<3;j++){
        printf("%d\t",c[i][j]);
    }
    printf("\n");
}

    return 0;
}