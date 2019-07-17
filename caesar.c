#include <stdio.h>

int main()
{
   char a[26]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
   char p[26];
   printf("enter the word in capital letters \n");
   int j;
   gets(p);
   for(int i=0;p[i]!='\0';i++)
      {
          j=0;
          while(p[i]!=a[j])
          {
              
              j++;
          }
          
          j=(j+1)%26;
          p[i]=a[j];
          printf("%c",p[i]);
      }
   
}
