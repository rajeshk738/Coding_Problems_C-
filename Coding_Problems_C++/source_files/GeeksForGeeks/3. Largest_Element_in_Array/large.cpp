#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int largest_using_for(int arr[],int n)
{
	int max = arr[0];

	for(int i=1;i<n;i++)
		{
			if(arr[i] > max)
				max = arr[i];
		}

	return max;
}


int largest_max_element(int arr[],int n)
{
	return *max_element(arr,arr+n);
}

int main(void)
{
	int arr[] = {10,23,3,33,2,30};
	int arr_size = sizeof(arr) / sizeof(arr[0]);


	cout<<"Largest element using the for loop: "<<largest_using_for(arr,arr_size)<<endl;

	cout<<"Largest element using the max element:"<<largest_max_element(arr,arr_size);

    return 0;
 }
