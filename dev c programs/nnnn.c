#include<stdio.h>
void modify(int a[3]);
int main()
{
int i;
int arr[3] = {1,2,3};
modify(arr);// passing address of array
for(i=0;i<3;i++)
printf("%d\t",arr[i]);
getch();
return 0;
}
void modify(int a[3])
{
int i;
for(i=0;i<3;i++)
a[i] = a[i]*a[i];
}
