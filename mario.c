

#include <stdio.h>

int main()

{
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        printf("\n");
        for(int j=0;j<2+i;j++)
        {
            printf("#");
        }
    }
}
