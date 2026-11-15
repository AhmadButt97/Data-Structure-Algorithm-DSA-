#include <iostream>
using namespace std;
class solution
{ public:
	int remove(int arr[],int a,int m)
	{ int elements=a;
		int temp[a];
		for(int i=0;i<a;i++)
		{
			if(arr[i]==m)
			{
				elements--;
				continue;
			}
			else
			{
				temp[i]=arr[i];
			}
		}
		return elements;
	}
};
int main()
{
	solution s;
	int array[]={5,3,3,2,1,2,2};
	cout<<s.remove(array,7,3);
	return 0;
}