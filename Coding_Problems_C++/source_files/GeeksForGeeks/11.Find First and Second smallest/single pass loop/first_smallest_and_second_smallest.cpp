#include <iostream>
using namespace std;

void findFirstSecondSmallest(int arr[],int n)
{
	int first = INT8_MAX;
	int second;
	int temp;

	for(int i=0;i<n;i++)
	{

		if(arr[i]<first)
		{
			second = first;
			first = arr[i];
		}

		if(arr[i]<second && arr[i] != first)
			second = arr[i];

	}

	cout<<first<<" "<<second<<endl;
}

int main(void){

	int arr[] = {12, 13, 1, 10, 34, 1};

	int size = sizeof(arr) / sizeof(arr[0]);

	if(size<2)
	{
		cout<<"No Second Smaller element"<<endl;
	}
	else{

	findFirstSecondSmallest(arr,size);
	}

	return 0;
}
