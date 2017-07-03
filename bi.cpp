#include<iostream>
using namespace std;
int beg,end,mid,n,item;
int main()
{
	cout<<"\nEnter Number of Elements-:";
	cin>>n;
	int value[n];
	cout<<"\nEnter Elements in sorted order-:";
	for(int i=0;i<n;i++)
	{
		cin>>value[i];
	}

	cout<<"\nEnter Element To search-:";
	cin>>item;
	beg=0,end=n;
	mid=(beg+end)/2;
	for(;value[mid]<item &&beg!=end;)
	{	
		beg=mid+1;
		mid=(beg+end)/2;	
	}	
	for(;value[mid]>item &&beg!=end;)
	{
		end=mid;
		mid=(beg+end)/2;
	}
	if(value[mid]==item)
		cout<<"\nPosition-:"<<mid<<"\n";
	else
		cout<<"\nNot Found\n"; 
}  
