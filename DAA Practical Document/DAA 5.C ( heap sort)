#include<stdio.h>
#include <conio.h>
void heapify(int arr[])
{
    int i,n;
    n=arr[0];
    for(i=n/2;i>=1;i--)
    adjust(arr,i);
}
int adjust(int arr[],int i)
{
    int j,temp,n,k=1;
    n=arr[0];
    while(2*i<=n && k==1)
    {
       j=2*i;
       if(j+1<=n && arr[j+1] > arr[j])
	   j=j+1;

       if( arr[j] < arr[i])
	   k=0;
       else
       {
	   temp=arr[i];
	   arr[i]=arr[j];
	   arr[j]=temp;
	   i=j;
	}
      }
      return 0;
}

void main()
{
int arr[100],n,temp,last,i;
clrscr();
printf(" enter no. of elements in your array: ");
scanf("%d",&n);
printf("enter Elements in array:");
for(i=1;i<=n;i++)
scanf("%d",&arr[i]);
arr[0]=n;
heapify(arr);
while(arr[0] > 1)
{
    last=arr[0];
    temp=arr[1];
    arr[1]=arr[last];
    arr[last]=temp;
    arr[0]--;
    adjust(arr,1);
}

printf("Array after Heap Sort is\n");
for(i=1;i<=n;i++)
printf("%d ",arr[i]);
getch();
}
