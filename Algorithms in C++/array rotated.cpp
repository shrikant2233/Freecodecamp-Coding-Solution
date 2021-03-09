#include<iostream>
using namespace std;
void leftrotate(int arr[],int n)
{
	int temp=arr[0],i;
	for(i=0;i<n-1;i++)
		arr[i]= arr[i+1];
	
	arr[n-1] = temp;
	
}
void leftrotate1(int arr[],int d,int n)
{
	for(int i=0;i<n;i++)
		leftrotate(arr,n);
		
}
void printArr(int arr[],int n)
{
		for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
}
int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    // Function calling
    leftrotate1(arr, 2, n);
    printArr(arr, n);
 
    return 0;
}
