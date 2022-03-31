#include<stdio.h>
int main(){
   /* 2D array declaration*/
   int row,coloum;
  printf("enter no of rows");
  scanf("%d",&row);
  printf("enter no of coloum");
  scanf("%d",&coloum);
  
  
  
  
  int arr[row][coloum];
  
   
   int i, j;
   for(i=0; i<row; i++) {
      for(j=0;j<coloum;j++) {
         printf("Enter value for arr[%d][%d]:", i, j);
         scanf("%d", &arr[i][j]);
      }
   }
   //Displaying array elements
   printf("Two Dimensional array elements:\n");
   for(i=0; i<2; i++) {
      for(j=0;j<3;j++) {
         printf("%d ", arr[i][j]);
         if(j==2){
            printf("\n");
         }
      }
   }
   return 0;
  }