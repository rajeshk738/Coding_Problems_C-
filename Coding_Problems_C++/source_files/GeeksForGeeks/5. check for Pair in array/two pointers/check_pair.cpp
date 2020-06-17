// sorted Array checking pair two pointers

#include <iostream>
using namespace std;

void checkPair(int arr[],int size,int target)
{
	int i = 0,j = size;

	while(i<j)
	{
		if(arr[i]+arr[j] == target)
		{
			cout<<arr[i]<<", "<<arr[j]<<endl;
			return;
		}
		else if(arr[i]+arr[j]<target)
				i++;
		else
			j--;
	}

	cout<<-1;
	return;
}

int main(void){
	int arr[] = {-3,-1,0,1,2};
	int sum =-2 ;

	int size = sizeof(arr) / sizeof(arr[0]);
	checkPair(arr,size-1,sum);

	return 0;

}


