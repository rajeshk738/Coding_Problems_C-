#include <iostream>
using namespace std;

void reverseArray(int arr[],int low,int high){

	if(low>=high)
		return;
	int temp = arr[low];
	arr[low] = arr[high];
	arr[high] = temp;

	reverseArray(arr,low+1,high-1);

}

void printArray(int arr[],int n){

	for(int i=0;i<=n;i++)
		cout<<arr[i]<<" "<<endl;

}

int main(void){
	int arr[] = {4,3,2,1};
	int size = sizeof(arr) / sizeof(arr[0]);

	reverseArray(arr,0,size-1);

	printArray(arr,size-1);

	return 0;
}
