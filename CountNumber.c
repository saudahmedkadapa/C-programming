#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number =");
    scanf("%d",&num);
    int count=0;
    while (num !=0)
    {
        num =num /10;
        count ++;

    }
    printf("%d",count);
    return 0;

}