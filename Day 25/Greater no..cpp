using namespace std;
#include<iostream>
int main()
{
	int a[100] , n ,gr=0;
	cout<<"n : ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the no. :";
		cin>>a[i];
		if(a[i]>gr)
		{
			gr=a[i];
		}
	}
	cout<<"Greater no. : "<<gr;
}
