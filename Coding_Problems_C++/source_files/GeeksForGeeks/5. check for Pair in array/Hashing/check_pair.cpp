// using hashing

#include <iostream>
#include <unordered_set>
using namespace std;

void checkPair(int arr[],int size,int target)
{
	unordered_set<int> s;

	for(int i=0;i<size;i++)
	{
		if(s.find(target-arr[i]) != s.end())
		{
			cout<<arr[i]<<" "<<target-arr[i]<<endl;
			return;
		}
		else
			s.insert(arr[i]);
	}
cout<<-1; return;
}

int main(void){
	int arr[] = {57,25,5,1,30};
	int sum = 57 ;

	int size = sizeof(arr) / sizeof(arr[0]);
	checkPair(arr,size,sum);

	return 0;

}


