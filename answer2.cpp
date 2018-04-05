#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{ int mul=1;
	for(int i=1;i<=n;i++)
	{
		mul=mul*i;
	}
	return mul;
}
int new_n(int num, char arr[],int n,char k)
{
		int alpha[26]={0};
	for(int i=1;i<=n;i++)
	{
		alpha[arr[i]-'a']++;
	}
	for(int i=1;i<=n;i++)
	{
		if(arr[i]-'a'!=k&&alpha[arr[i]-'a']>=2)
		num=num/fact(alpha[arr[i]-'a']);
		else if(arr[i]-'a'==k&&alpha[arr[i]-'a']>=2)
		{
			num=num/fact(alpha[arr[i]-'a'-1]);
		}
	}
	return num;
}
main()
{
	int n,m;
	cin>>n;
	m=n;
	char arr[n];
	int i,j;
	for(i=1;i<=n;i++)
	{
		cin>>arr[i];
	}
	string name;
	cin>>name;
	sort(arr+1,arr+n+1);

	int sum=0,num;
	for(i=0;i<n;i++)
	{
	  for(j=1;j<=n;j++)
	  {  
	  		if(name[i]!=arr[j]&&arr[j]!='0')
		{
			num=fact(m-1);
			sum+=new_n(num,arr,n,arr[j]);
		
			
		}
		else if(name[i]==arr[j])
	    {  arr[j]='0';
	    
			m--;
			break;
		}
	  }
	}
	
	cout<<sum+1<<endl;
	
}
