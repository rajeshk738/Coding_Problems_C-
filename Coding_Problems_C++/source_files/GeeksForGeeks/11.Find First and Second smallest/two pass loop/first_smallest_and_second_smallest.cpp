#include <iostream>
using namespace std;

void findFirstSecondSmallest(int arr[],int n)
{
	if(n<2)
	{
		cout<<"Invalid array Input"<<endl;
		return;
	}

	int first = INT8_MAX;
	int second = INT8_MAX;

	for(int i=0;i<n;i++)
	{
		if(arr[i]<first)
			first = arr[i];

	}

	for(int j=0;j<n;j++)
	{
		if(arr[j]<second && arr[j] != first)
			second = arr[j];

	}
	if(second == INT8_MAX)
		cout<<"No second Smaller Element";
	else
	cout<<first<<" "<<second<<endl;
}

int main(void){

	int arr[] = {12, 13, 1, 1, 34, 1};

	int size = sizeof(arr) / sizeof(arr[0]);

	findFirstSecondSmallest(arr,size);

	return 0;
}
