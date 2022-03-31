#include<stdio.h>
int main(){
  int unit;
  float charge;
  float amount;
  char name[20];
  printf("enter the name:");
  scanf("%s",name);
  printf("enter the unit:");
  scanf("%d",&unit);
  if(unit>=0 && unit<=200){

     charge=.8*unit+100;

  }
  else if(unit>=200 && unit<=300){
      charge= (.8*200) + (.9*(unit-200))+100;
  }
  else {
      charge= (.8*200) + (.9*100) + (1*(unit-300)+100);
  }
amount = charge ;
  if (charge >400){
       amount = charge + (.15*charge);
  }


    printf("the total bill is %f",amount);

  
  
  
}