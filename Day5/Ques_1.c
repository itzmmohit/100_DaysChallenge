//Asked in Mindtree
//Write C program for the following Pattern for n=5 (carefully look at the order)
//1
//3*2
//4*5*6
//10*9*8*7
//11*12*13*14*15

#include <stdio.h>
int main()
{
    int i,j,n=5,a=0;
    for(i=1;i<=n;i++){
        if(i%2!=0)
        {   
            for(j=1;j<=i;j++){
                a++;
                if(j!=i)
                    printf("%d*",a);
                else
                    printf("%d\n",a);
            }
        }
        if(i%2==0)
        {
            a+=i;
            for(j=1;j<=i;j++)
            {
                if(j!=i)
                    printf("%d*",a);
                else
                    printf("%d\n",a);
                a--;
            }
            a+=i;
        }
    }
    return 0;
}

