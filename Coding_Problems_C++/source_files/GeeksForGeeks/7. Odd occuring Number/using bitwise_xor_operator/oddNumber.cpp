// using bitwise XOR operator
// time complexity: O(n) and space : O(1)

#include <iostream>
using namespace std;

int getOddOcurringNumber(int arr[],int size)
{
	int c = 0;

	for(int i=0;i<size;i++)
		c = c ^ arr[i];

	if(c != 0)
		return c;
	else
	 return -1;
}


int main(void){

	int arr[]= {1, 2, 3, 2, 3, 1,2,2,3,3};
	int size = sizeof(arr) / sizeof(arr[0]);

	cout<<getOddOcurringNumber(arr,size);

	return 0;
}
