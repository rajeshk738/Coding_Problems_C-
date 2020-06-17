// using total sum formula n(n+2)/2
// when we sum the array elements consisting too many it may have integer overflow

#include <iostream>
using namespace std;

int missingNumber(int arr[],int size)
{
	int x1=0,x2=0;

	for(int i=0;i<size;i++)
		x1 ^= arr[i];

	for(int i=1;i<=size+1;i++)
		x2 ^= i;

	return (x1^x2);
}

int main(void){

	int arr[] = {1,2,3,4,5,6,8,9,10};
	int size = sizeof(arr) / sizeof(arr[0]);

	cout<<missingNumber(arr,size);
	return 0;
}
