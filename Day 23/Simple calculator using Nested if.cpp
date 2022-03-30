using namespace std;
#include<iostream>
int main()
{
	char ch;
	float num1 , num2 ,result ;
	cout<<"Enter the nos. :";
	cin>>num1>>num2;
	cout<<"\n"<<"Enter the operator (+,-,*,/) :";
	cin>>ch;
	cout<<"\n";

	if(ch=='+')
		result=num1+num2;
	else if(ch=='-')
		result=num1-num2;
	else if(ch=='*')
		result=num1*num2;
	else if(ch='/')
		result=num1/num2;
	else
	{
		cout<<"\n"<<"Wrong Operator!\n";
		goto lb;
	}
		cout<<"\n"<<"Result :"<<result<<"\n";
		lb:
		return 0;
}
