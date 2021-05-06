#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
#define  ll long long

ll powers(ll b, ll n , ll md)
{      ll product = 1;
    for (int i = 0; i < n; ++i)
    {
        product = (product*b) % md;
    }

    return product;
}

int main()
{   ll n ;
	 cin>>n;
     cout<<powers(2 , n , 1000000007);
    return 0;
}
