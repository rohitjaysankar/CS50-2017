#include <stdio.h>

void main()
{

long long int c;
printf("enter the credit card number");
scanf("%lld",&c);



int i=1;
int k;
int g=0;
int p;
for (;i<=15;i++)
  {
    if(i%2!=0)
       {
          k=c%10;
          g=g+k;
       }
       else
       {
           k=c%10;
           k=k*2;
           if(k>10)
           {
               p=k%10;
               k=k/10;
               g=p+k;
           }
           
           else
           {
               g=g+k;
               
           }
           
           
           
           
       }
  }

  
  if(g%10==0)
  {
      printf("credit card valid");
  }
  else 
  {
     printf("credit card not valid");
  }
}
