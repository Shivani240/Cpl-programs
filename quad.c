#include<stdio.h>
#include<math.h>
int main(){
  int a,b,c; 
  float r1,r2;
  printf("enter the cooficient");
  scanf("%d %d %d",&a,&b,&c);
  float d;
  d=(b*b)-(4*a*c);
  if(a==0){
    printf("a cannot be zero!");
    return 1;
  }else if(d==0){
    printf("the roots are real and equal");
    r1=r2=(-b)/(2*a);
    printf("the roots are %f",r1);

    
  }else if(d>0){
    printf("roots are real and unequal");
    r1=((-b) + sqrt(d))/(2*a) ;
    r2=((-b) - sqrt(d))/(2*a);
    printf( " the roots are %f and %f",r1,r2);

  }else {
    printf("roots are imaginary");
   int real=(-b)/(2.0*a);
   int imag=sqrt(d)/(2.0*a);
   printf("the roots are r1=%d+i%d\n",real,imag);
   printf("r2=%d-i%d",real,imag);
  }

}