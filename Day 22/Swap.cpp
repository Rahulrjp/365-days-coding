using namespace std;
#include<iostream>
int main()
{
	int x ,y ,temp=0;
	cout<<"Enter the value of X : ";
	cin>>x;
	cout<<"Enter the value of Y : ";
	cin>>y;
	cout<<"\nSwapping the values of X and Y\n";
	temp=x;
	x=y;
	y=temp;
	cout<<"X = "<<x;
	cout<<"\nY = "<<y<<"\n";
}
