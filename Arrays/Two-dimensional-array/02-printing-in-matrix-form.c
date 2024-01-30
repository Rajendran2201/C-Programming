// Online C compiler to run C program online
#include <stdio.h>

int main() {
  int a[3][3];

//getting values from the user 
for(int i=0;i<3;i++){
  for(int j=0;j<3;j++){
      printf("Enter the value of a[%d][%d]: ",i,j);
      scanf("%d",&a[i][j]);
  }
}

//printing the vealues 
for(int i=0;i<3;i++){
  for(int j=0;j<3;j++){
        printf("%d\t",a[i][j]);
    }
    printf("\n");
}
    return 0;
}