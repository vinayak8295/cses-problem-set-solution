#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
#define  ll long long

vector<ll> p ; 

ll logic(ll n , int a , int b , int c )
{
  if (n>0)
  {
    logic(n-1,a,c,b);
    p.push_back(a);
    p.push_back(c);
    logic(n-1,b,a,c);
  }
}


int main()
{  ll n;
  cin>>n;
    logic(n,1,2,3);
    cout<<p.size()/2<<endl;
    for (int i = 0; i < p.size(); i = i+2 )
    {
      cout <<p[i]<<" "<<p[i+1]<<endl;
    }
    return 0;
}