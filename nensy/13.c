#include<stdio.h>
void main()
{

    int i,n;
    int t1=0,t2=1;
    int f=t1+t2;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: %d %d ",t1,t2);

       for (i=3;i<=n;i++)
            {
              printf("%d ",f);
              t1=t2;
              t2=f;
              f=t1+t2;
            }
}
