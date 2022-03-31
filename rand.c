#include <stdio.h>


int main()
{
    int n,arr[20],ele;
    printf("enter no of elements");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
      scanf("%d",&arr[i]);
      
    }
    printf("enter founding elements");
    scanf("%d",&ele);
    for(int i=0;i<n;i++){
      if(arr[i]==ele){
        printf("element found at %d",i);
        return 1;
        }
      
      
}
  printf("not found");
  }