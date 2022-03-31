#include<stdio.h>
#include<string.h>


void stcp(char a1[],char a2[]){
  int i,j;
  int c =0;
  for( i=0;a1[i]!='\0';i++){
    c+=1;}
    
  
  for( j=0;a2[j]!='\0';j++){
    a1[c]=a2[j];
    c++;
    }
    a1[c] = '\0';
}


int main(){

  char a1[20],a2[20];
  printf("enter the two string to be copied");
  scanf("%s %s",a1,a2);
  stcp(a1,a2);
  printf("%s",a1);
  
    
}