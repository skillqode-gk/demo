// function -> work
/*
    Argument    return
    NO          NO
    NO          With
    With        NO
    With        With
*/
#include<stdio.h>
int Addition(int x, int y)  //WAWR
{
    int total = x - y;
    return total;
}
int main()
{
    int a,b,x;
    printf("Enter a and b:");
    scanf("%d%d",&a,&b);
    x = Addition(a,b);
    printf("Total is: %d",x);
}


