#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
#define  ll long long


int main()
{   ll t , a,b ;
        
	 cin>>t;
     for (int i = 0; i < t; ++i)
     {
       cin>>a>>b;

       if ( (2*a - b) >=0 && (2*a - b)%3 == 0 && (2*b - a) >=0  && (2*b - a)%3 == 0 )
       {
         cout<<"YES"<<endl;
       }
       else{
        cout<<"NO"<<endl;
       }
     }
    return 0;
}
