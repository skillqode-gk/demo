// pointer -> stored variable address
#include<stdio.h>
int main()
{
    // int a[] = {10,20,30,40,50};
    // int *p;
    // p = &a;
    // for (int i = 0; i < 5; i++)
    // {
    //     // printf("\n%d\t%u",a[i],&a[i]);
    //     printf("\n%d\t%u",*(p+i),(p+i));
    // }
    int a=20,*p,**b;
    p = &a;
   b =&p;
    printf("value of a: %d",a);
    printf("\nAddress of a is: %u",&a);
     printf("\nAddress of a using p is: %d",p);
    printf("\nAddress of p is: %u",&p);
    printf("\nvalue of a using p is: %d",*p);
    printf("\nAddress of p  using b is: %d",b);
    printf("\nvalue of a using b is: %d",**b);
        
}

// int a=20,*p,**b;
//     p = &a;
//     b =&p;
//     // printf("value of a: %d",a);
//     // printf("\nAddress of a is: %u",&a);
//     // printf("\nAddress of a using p is: %d",p);
//     printf("\nAddress of p is: %u",&p);
//     //printf("\nvalue of a using p is: %d",*p);
//     printf("\nAddress of p  using b is: %d",b);
//     // printf("\nvalue of a using b is: %d",**b);