// sorted array majority element check
// majority element count of element greater than n/2
#include <iostream>
using namespace std;

void majorityElement(int arr[],int size){

	int count = 1;

	for(int i=1;i<size;i++)
	{
		if(arr[i] == arr[i-1])
		{
			count++;
			if(count > size/2)
			{
				cout<<"Majority Element Found "<<arr[i]<<endl;
				return;
			}
		}
		else
			count = 1;
	}
cout<<"No Majority Element Found"<<endl;
return;
}
int main(void){
	int arr[] = {2,2,3,3,3,3,3,4,4};

	int size = sizeof(arr) / sizeof(arr[0]);

	majorityElement(arr,size);

	return 0;

}
