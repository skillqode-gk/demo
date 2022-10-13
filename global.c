// recursive function -> function automatically called by itself.
// factorial number 5! = 5*4*3*2*1 =120
// fibbonacci series ->  1  1   2   3   5   8   13  ....
#include<stdio.h>
int fact(int a)
{
    if(a==1)
        return 1;
    else
        return a * fact(a-1);
}
int main()
{
    int n,f;
    printf("Enter number:");
    scanf("%d",&n);
    f = fact(n);
    printf("Given number factorial is: %d",f);
}
/*
n = 5
fact(5) =120 -> 5 * fact(5-1) = 24
               fact(4) ->   4 * fact(4-1) =6
                                fact(3) -> 3 * fact(3-1) =2
                                                fact(2)  -> 2 * fact(2-1) =1
                                                                fact(1) <=1

fact(7) = 5040 > 7 * fact(6) =720
                6 * fact(5) =120
                    5 * fact(4) =24
                        4 * fact(3) =6
                            3 * fact(2) =2
                                2 * fact(1) =1
*/