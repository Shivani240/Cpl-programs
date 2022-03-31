#include<stdio.h>
int main(){
  int a[20][20],r,c,i,j,b[20][20];
  printf("enter the no of rows and coloum");
  scanf("%d%d",&r,&c);
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      scanf("%d",&a[i][j]);
    }
  }
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      printf(" %d",a[i][j]);
    }
    printf("\n");
  }
  for(int  i=0;i<r;i++){
      
    for(int j=0;j<c;j++){
      b[i][j]=a[j][i];
      
      
    }
  }
  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
     printf("  %d",b[i][j]);
      }
    printf("\n");
    }
  }
  
  