#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
#define  ll long long
int main()
{
	 ll n , s=0;
	 cin>>n;
     int a;
     for (int i = 1; i < n ; ++i)
     {  
     	cin>>a;
     	s+=a;
     }

	 
	cout<<n*(n+1)/2 -s; 

    return 0;
}
