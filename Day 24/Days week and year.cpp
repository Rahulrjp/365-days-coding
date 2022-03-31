using namespace std;
#include<iostream>
int main()
{
	int days , year ;
	cout<<"Days : ";
	cin>>days;
	year=days/365;
	int r_days=days%365;
	cout<<"Year : "<<year<<" year "<<r_days<<" days";
}
