#include<stdio.h>
float add(float ,float);
float sub(float ,float);
float mult(float ,float);
float div(float ,float);
float exp(float ,float);
int main()
{
    int choice;
    float a,b;
    printf("\n Enter the two operands");
    scanf("%f%f",&a,&b);
    printf("\n choose the operation from the following\n1.Addition 2.Subtraction 3.Multiplication 4.Division 5.Exponential");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("\nThe addition of %f and %f is %f",a,b,add(a,b));
        break;
    case 2:
        printf("\nThe subtraction of %f and %f is %f",a,b,sub(a,b));
        break;
    case 3:
        printf("\nThe multiplication of %f and %f is %f",a,b,mult(a,b));
        break;
    case 4:
        printf("\nThe division of %f and %f is %f",a,b,div(a,b));
        break;
    case 5:
        printf("\nThe exponential of %f and %f is %f",a,b,exp(a,b));
        break;
    default:
        printf("\n Entered choice is invald");
    }
    return 0;
}
float add(float a,float b)
{
    return(a+b);
}
float sub(float a,float b)
{
    return(a-b);
}
float mult(float a,float b)
{
    return(a*b);
}
float div(float a,float b)
{
    return(a/b);
}
float exp(float a,float b)
{
    float i,y=1;
    for(i=1;i<=b;i++)
        y*=a;
    return y;
}
