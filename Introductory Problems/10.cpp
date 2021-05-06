#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
#define  ll long long

int zeroes(ll n)
{
       int ans = 0;
       int p =5;
       while((n/p)>0){
         ans = ans + n/p;
         p=p*5;
       }
       return ans;
}

int main()
{   ll n ;
	 cin>>n;
     cout<<zeroes(n);
    return 0;
}
