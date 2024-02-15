#include <stdio.h>
int main(){
    int n;
    printf("enter the number of elements");
    scanf("%d",&n);
    printf("enter the elements");
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++)
    {
       if(a[i]<a[i+1])
       {
           printf("%d",a[i]);
       }
    }
    return 0;
}
