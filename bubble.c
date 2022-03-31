
// C program to read a large number digit by digit
#include <stdio.h>
int main()
{
	// array to store digits
int n;
printf("enter the no of elements:");
scanf("%d",&n);
int i;
int a[20];
for(i=0;i<n;i++) {
  scanf("%d",&a[i]);
}
for( i=0;i<n;i++){
  for(int j=i+1;j<n;j++){
    if(a[i]>a[j]){
      int temp=a[i];
      a[i]=a[j];
      a[j]=temp;
      
    }
  }
}
for(i=0;i<n;i++){
  printf("   %d",a[i]);

}

}
