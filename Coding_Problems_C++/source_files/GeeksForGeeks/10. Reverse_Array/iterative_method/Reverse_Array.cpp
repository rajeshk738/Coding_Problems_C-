#include <iostream>
using namespace std;

void reverseArray(int arr[],int n){

	int i=0,j=n;
	int temp;
	while(i<j)
	{
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++;j--;
	}

}

void printArray(int arr[],int n){

	for(int i=0;i<=n;i++)
		cout<<arr[i]<<" "<<endl;

}

int main(void){
	int arr[] = {4,3,2,1};
	int size = sizeof(arr) / sizeof(arr[0]);

	reverseArray(arr,size-1);

	printArray(arr,size-1);

	return 0;
}
