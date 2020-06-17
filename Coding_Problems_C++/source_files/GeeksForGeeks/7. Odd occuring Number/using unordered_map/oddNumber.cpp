// using unordered_map
// time complexity: O(n) and space : O(n)

#include <iostream>
#include <unordered_map>
using namespace std;

int getOddOcurringNumber(int arr[],int size)
{
	unordered_map<int,int> mp;

	for(int i=0;i<size;i++)
		mp[arr[i]]++;

	for(auto x : mp)
	{
		if((x.second) % 2 != 0)
		{
			return x.first;
		}
	}

	return -1;
}


int main(void){
	int arr[]= {1, 2, 3, 2, 3, 1,2};
	int size = sizeof(arr) / sizeof(arr[0]);

	cout<<getOddOcurringNumber(arr,size);

	return 0;
}
