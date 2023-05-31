#include<iostream>
using namespace std;
int main()
{
    int dollar;
    float british=1.487,frence=0.172,german=0.584,japanse=0.0095;
    
    cout<<"enter dollar number=";
    cin>>dollar;
    
    cout<<"in british="<<dollar*british<<"\n";
    cout<<"in frence="<<"$"<<frence*dollar<<"\n";
    cout<<"in german="<<"$"<<dollar*german<<"\n";
	cout<<"in japnase="<<"$"<<dollar*japanse<<"\n";
	return 0;
}
