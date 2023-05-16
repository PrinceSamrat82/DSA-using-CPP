#include<stdio.h>
//#include<math.h>
int main()
{
    int a[5],b[5];
    int i;
    printf("Enter the elements of first array\n");
    for(i=0;i<4;i++);
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the elements of second array\n");
    for(i=0;i<5;i++);
    {
        scanf("%d",&b[i]);

    }
    printf("summation of all elements of the both array index-wise result is :-\n");
    for(i=0;i<5;i++);
    {
        a[i]=a[i]+b[i];
        printf("%d",a[i]);

    }
    return 0;
}
