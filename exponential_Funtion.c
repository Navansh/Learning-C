#include<stdio.h>
int powerme(int ,int );
int main()
{
    //program to make a function to calculate the value of a raised to b

int base,power,num,a;
printf("Enter the base\n");
scanf("%d",&base);
printf("Enter the power\n");
scanf("%d",&power);

a=powerme(base,power);
printf("The answer is %d",a);

    return 0;
}
int powerme(int base,int power)
{
    int num;
num=base;
for (; power > 1; power--)
{
    base=base*num;
}
return base;
}
