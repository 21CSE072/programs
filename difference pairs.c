#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("enter the no of elements");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int diff,count=0;
    printf("enter the difference");
    scanf("%d",&diff);
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(abs(a[i]-a[j])==diff)
            {
                count=count+1;
            }
        }
    }
    printf("no of pairs are %d",count);
}