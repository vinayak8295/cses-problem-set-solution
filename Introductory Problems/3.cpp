#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
#define  ll long long
int main()
{
	 string s;
     cin>>s;
     int m=0 , count=0;

     for (int i = 0; i < s.size(); ++i)
     {   
         if (s[i]==s[i+1])
         {
             count++ ;
         }
         else{
         	count = 0;
		 }

         m = max(m,count);
     }
     cout<<m+1;
    return 0;
}
