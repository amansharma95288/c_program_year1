//#include<stdio.h>
//int main ()
//{
//    int a[5],i,n,temp;
//    printf("enter the size of array:\n");
//    scanf("%d",&n);
//    printf("enter the elements of an array:\n");
//   
//    for ( i = 0; i <n; i++)
//    {
//         scanf("%d",&a[i]);
//    }
//    printf("now!,reverse of the array elements:\n ");
//    for ( i =0; i<=n-1; i++)
//    {
//        temp=a[i];
//        a[i]=a[n-1-i];
//        a[n-1-i]=temp;
//    } printf("%d\t",a[i]);
//    return 0;
//}

#include<stdio.h>
int main ()
{
    int a[10],i,n;
    printf("enter the size of array:\n");
    scanf("%d",&n);
    printf("enter the elements of an array:\n");
   
    for ( i = 0; i <n; i++)
    {
         scanf("%d",&a[i]);
    }
    printf("now!,reverse of the array elements:\n ");
    for (i=n-1;i>=0;i--)
    {
      printf("%d\t",a[i]);
  }
    return 0;
}
