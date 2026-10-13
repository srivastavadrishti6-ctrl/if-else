#include<stdio.h>
int main()
{
    int x, y;
    printf("Enter two numbers:");
    scanf("%d %d",&x, &y);

    if(x==y)
    {
        printf("Result: %d=%d", x, y);
    }
    else if(x>y)
    {
        printf("Result: %d>%d", x, y);
    }
    else{
        printf("Result:%d<%d", x, y);
    }
    return 0;
}