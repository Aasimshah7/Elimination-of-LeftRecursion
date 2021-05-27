#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char a[10],b[50][10]={""},d[50][10]={""},ch;
	int i,n,c[10]={0},j,k,t,n1;
	cout<<"Enter the non terminals : ";
	cin>>a;
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		cout<<"Enter the no. of productions for "<<a[i]<<" : ";
		cin>>c[i];
	}
	t=0;
	for(i=0;i<n;i++)
	{
		cout<<"Enter the productions for "<<a[i]<<" : \n";
		k=t;
		for(j=0;j<c[i];j++)
		{
			cout<<a[i]<<" -> ";
			do
			{
				cin>>b[k];
				k++;
			}while(k<j);
		}
		t=t+10;
	}
	t=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==b[t][0])
		{
			n1=strlen(b[t]);
			for(k=1;k<n1;k++)
			{
				d[t][k-1]=b[t][k];
			}
		}
		t=t+10;
	}
	t=0;
	cout<<"\nThe resulting productions after eliminating Left Recursion are : ";
	for(i=0;i<n;i++)
	{
		if(a[i]==b[t][0])
		{
			for(j=1;j<c[i];j++)
			{
				cout<<"\n"<<a[i]<<"  -> "<<b[t+j]<<a[i]<<"'";
			}
		}
		t=t+10;
	}
	t=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==b[t][0])
			cout<<"\n"<<a[i]<<"' -> "<<d[t]<<a[i]<<"'|"<<((char)238);
		else
			for(j=0;j<c[i];j++)
				cout<<"\n"<<a[i]<<"  -> "<<b[t+j];
		t=t+10;
	}
	return 0;
}
