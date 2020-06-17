// using total sum formula n(n+2)/2
// when we sum the array elements consisting too many it may have integer overflow

#include <iostream>
using namespace std;

int missingNumber(int arr[],int size)
{
	int sum=0;
	int n = size+1;
	int total_sum = n*(n+1)/2;

	for(int i=0;i<size;i++)
		sum += arr[i];

	return (total_sum-sum);
}

int main(void){

	int arr[] = {1,2,3,5,6,7,8,9,10};
	int size = sizeof(arr) / sizeof(arr[0]);

	cout<<missingNumber(arr,size);
	return 0;
}
