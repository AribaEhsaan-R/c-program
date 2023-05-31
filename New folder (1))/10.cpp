#include<iostream>
using namespace std;
int main()
{
	float pounds,shillings,pence;
	cout<<"enter pounds=";
	cin>>pounds;
	
	cout<<"enter shillings=";
	cin>>shillings;
	
	cout<<"enter pence=";
	cin>>pence;
	
	float totalpence=(pence/12*20)+shillings/20;
	float totalpounds=pounds+totalpence;
	cout<<"decimal pounds=£"<<totalpounds;
	return 0;
	
}
   

