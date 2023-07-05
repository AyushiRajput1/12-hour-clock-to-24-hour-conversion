#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;

int main()
{
	int h,m,sec;
	char a_p[3]; 
	fflush(stdin);
	cout<<"--Enter Time in 12 hour format--"<<endl;
	cout<<"Hour:";
	cin>>h;
	cout<<endl;
	cout<<"Min:";
	cin>>m;
	cout<<endl;
	cout<<"Sec:";
	cin>>sec;
	cout<<endl;
	cout<<"AM/PM:";
	cin>>a_p;
 	if(strcmp(a_p,"AM")==0)
    {
    	if(h==12)
    		h=00;
	}
  	if(strcmp(a_p,"PM")==0)
  	{
  		if(h<12)
		  h=h+12;	
	}
	cout<<"--After conversion Time in 24 hour format--"<<endl<<endl;
	cout<<setw(2)<<setfill('0')<<h<<":"<<m<<":"<<sec;
	return 0;
}
