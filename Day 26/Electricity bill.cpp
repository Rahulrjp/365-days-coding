using namespace std;
#include<iostream>
int main()
{
	int unit , fix_charge=50 , rate , total;
	cout<<"Enter unit : ";
	cin>>unit;
	cout<<"Enter rate : ";
	cin>>rate;
	int energy_charge=(unit*rate*5/100);			//Say 5% of charge of unit used
	cout<<"Fixed Charge : "<<fix_charge<<" rs";
	cout<<"\nEnergy charge : "<<energy_charge<<" rs";
	total=(unit*rate)+energy_charge+fix_charge;
	cout<<"\nTotal Assessment : "<<total<<" rs\n\n";
}
