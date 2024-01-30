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

int max = a[0][0];

for(int i=0;i<3;i++){
  for(int j=0;j<3;j++){
      if(a[i][j]>max){
          max = a[i][j];
      }
}
}

printf("The maximum number is %d",max);

return 0;
}