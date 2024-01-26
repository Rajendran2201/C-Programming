#include<stdio.h>
#include<stdbool.h>
void main(){
  int size;
  printf("Enter the size of the array : ");
  scanf("%d",&size);
  int arr[size],duparr[size];
  for(int i=0;i<size;i++){
      duparr[i]=0;
  }
  for(int i=0;i<size;i++){
      printf("Enter the element of arr[%d]: ",i);
      scanf("%d",&arr[i]);
  }
  printf("The duplicate elements in the array are: ");
    
    for (int i = 0; i < size; i++) {
        bool dup = false;
        
        for (int j = 0; j < size; j++) {
            if (i != j && arr[i] == arr[j]) {
                dup = true;
                break;
            }
        }
        if (dup) {
            printf("%d ", arr[i]);
        }
    }
}