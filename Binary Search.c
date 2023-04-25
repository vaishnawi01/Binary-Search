#include<stdio.h>

int BinarySearch(int[],int,int);

int main()
{
	int arr[5]={32,5,7,56,78};
	//Bubblesort(arr,5);

	int ele;
	printf("Enter element to be searched\n");
	scanf("%d",&ele);
	int ret=BinarySearch(arr,ele,5);
	if(ret==-1)
	{
		printf("Element not found");
	}
	else
	{
		printf("Element found at %d",ret);
	}
}
	int BinarySearch(int arr[],int ele,int n)
{
	int lb=0;
	int ub=n-1;
	int mid;
	while(lb<=ub)
	{
		mid=(lb+ub)/2;
		if(ele==arr[mid])
		{
			return mid;
		}
		else if(ele<arr[mid])
		{
			ub=mid-1;
		}
		else if(ele>arr[mid])
		{
			lb=mid+1;
		}
	}
			return -1;
}

