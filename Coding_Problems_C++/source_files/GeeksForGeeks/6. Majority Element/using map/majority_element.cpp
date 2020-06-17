// using hashmap

#include <iostream>
#include <unordered_map>
using namespace std;

void majorityElement(int arr[],int size){

	unordered_map<int,int> mp;

	for(int i=0;i<size;i++)
	{
		mp[arr[i]]++;
	}

	for(auto x : mp)
			{
				if(x.second>size/2)
				{
					cout<<"majority element found "<<x.first<<endl;
					return;
				}
			}
	cout<<"No majority element found "<<endl;
	return;
}

int main(void){

	int arr[] = {2,2,3,3,3,4,4,4,4,4,4};

	int size = sizeof(arr) / sizeof(arr[0]);

	majorityElement(arr,size);

	return 0;

}
