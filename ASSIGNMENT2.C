#include<stdio.h>
int main()
{
    int num, sum = 0;
    printf("enter the five digit number\n");
    scanf("%d",&num);
    for(int i=0; i<5;i++)
    {
        sum+=num%10;
        num/=10;
    }
    printf("the sum of the five digit is %d",sum);
    getchar();
    getchar();
}