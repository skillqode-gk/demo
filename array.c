// array introduction
#include<stdio.h>
int main()
{
    int a[5],i,b[5],c[5];
    for(i=0;i<5;i++)
    {
        
            printf("Enter a[%d]: ",i);
            scanf("%d",&a[i]);
        
    }
    printf("\n");
    for(i=0;i<5;i++)
    {
        
            printf("Enter b[%d]: ",i);
            scanf("%d",&b[i]);   
    }
    printf("A\tB\tSum\n----------------------------------");
    for(i=0;i<5;i++)
    {
        c[i] = a[i] + b[i];
        printf("\n%d\t%d\t%d",a[i],b[i],c[i]);
    }
}

// 3 sub marks total and per and grade