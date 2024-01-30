#include <stdio.h>

int main() {
  int a[3][3], b[3][3], c[3][3];

  // Getting values from the user for matrix a
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      printf("Enter the value of a[%d][%d]: ", i, j);
      scanf("%d", &a[i][j]);
    }
  }

  // Getting values from the user for matrix b
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      printf("Enter the value of b[%d][%d]: ", i, j);
      scanf("%d", &b[i][j]);
    }
  }

  // Initializing matrix c with zeros
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      c[i][j] = 0;
    }
  }

  // Multiply elements of a and b and accumulate the sum in c
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      for(int k = 0; k < 3; k++) {
        c[i][j] += a[i][k] * b[k][j];
      }
    }
  }

  // Printing the values of matrix c
  printf("Resultant Matrix (a + b):\n");
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      printf("%d\t", c[i][j]);
    }
    printf("\n");
  }

  return 0;
}
