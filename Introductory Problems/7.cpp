#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
#define  ll long long

ll logic(ll n)
{     
    ll total = 0;
    total = (n*n*(n*n - 1) - 8 - 24 - (n-4)*16 - 16 -24*(n-4) - 8*(n-4)*(n-4))/2;
    return total;
}

int main()
{   ll n ;
	 cin>>n;
	 for (ll i = 1; i <= n; ++i)
	 {
	 	cout<<logic(i)<<endl;
	 }
     
    return 0;
}
