#include <iostream>
using namespace std;
int flag = -1;
int searchPivot(int arr[],int m,int n)
{
	if(arr[0] < arr[n])
		return 0;
	for(int i=1;i<=n;i++)
	{
		if(arr[i]<arr[i-1])
			return i-1;
	}
	return 0;
}

int searchInRotatedArray(int arr[],int low,int high,int key){

	int mid = (low+high) / 2;

	if(arr[mid] == key)
	{
		return flag=mid;
	}
	else if(arr[mid]<key)
	{
			searchInRotatedArray(arr,mid+1,high,key);
	}
	else
	{
		searchInRotatedArray(arr,low,mid-1,key);

	}
return flag;
}

int main(void)
{
	int arr[] = {5,6,7,8,9,10,1,2,3};
	int key = 6;
	int size = sizeof(arr) / sizeof(arr[0]);
	int middle = (size-1) / 2;
	int pivot = searchPivot(arr,middle,size-1);

	cout<<pivot<<endl;
	int index = -1;
	if(key < arr[0])
		 index = searchInRotatedArray(arr,pivot+1,size,key);
	else
		 index = searchInRotatedArray(arr,0,pivot,key);

	if(index != 1)
		cout<<"Found at index "<<index<<endl;
	else
		cout<<"Not Found";
	return 0;
}
