// Sum of Array elements

#include <iostream>

int main()
{
	int arr[] = {10,20,30,40,50,60};

	int arr_size = sizeof(arr) / sizeof(arr[0]);

	int sum = 0;

	for(int i=0;i<arr_size;i++)
	{
		sum += arr[i];
	}

	std::cout<<"Sum of Array Elements : "<<sum<<std::endl;
}
