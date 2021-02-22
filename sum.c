#include<stdio.h>
int sum(int a);
int main()
{
    int num,res;
    printf("Enter value: ");
    scanf("%d",&num);
    res=sum(num);
    printf("%d\n",res);
    return 0;
}
int sum(int num)
{
    if(num!=0)
    {
        return(num%10+sum(num/10));
    }
    else
    {
       return 0;
    }
}
