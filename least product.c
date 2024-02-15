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
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    int sum=1;
    for(int i=0;i<3;i++)
    {
        sum=sum*a[i];
    }
    printf("least product %d",sum);
}