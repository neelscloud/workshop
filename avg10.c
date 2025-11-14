#include<stdio.h>
int main()
{
    int a[30],n,i;
    float sum=0;
    printf("\n Enter the total number of students");
    scanf("%d",&n);
    printf("\n Enter their marks");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        sum+=a[i];
    printf("\n the sum of %d students marks is %f and its average is %f",n,sum,sum/n);
    return 0;
}
