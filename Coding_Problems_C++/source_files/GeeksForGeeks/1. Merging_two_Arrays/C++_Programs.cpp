// Merging two Arrays

#include <iostream>
using namespace std;

int main() {
	int arr1[] = {10,20,30,40,50};
	int arr2[] = {25,26,45,48,49,70,80,90,100};

	int arr1_size = sizeof(arr1) / sizeof(arr1[0]);
	int arr2_size = sizeof(arr2) / sizeof(arr2[0]);

	int n = arr1_size+arr2_size;
	int temp[arr1_size+arr2_size];

	int i=0,j=0,k=0;

	while(i<arr1_size && j<arr2_size)
	{
		if(arr1[i] < arr2[j])
		{
			temp[k++] = arr1[i++];
		}
		else
		{
			temp[k++] = arr2[j++];
		}
	}

	while(i<arr1_size)
	{
		temp[k++] = arr1[i++];
	}

	while(j<arr2_size)
	{
		temp[k++] = arr2[j++];
	}

	for(int i=0;i<n;i++)
	{
		cout<<temp[i]<<endl;
	}
	return 0;
}
