#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
#define  ll long long


int main()
{   string str ;
  cin>>str;
  
 sort(str.begin(), str.end()); 
  vector <string> v;

  do
        {
        	v.push_back(str);
        } while (next_permutation(str.begin(), str.end()));      
	
	cout<<v.size()<<endl;
	for (string y : v)
	{
		cout<<y<<endl;
	}
    return 0;
}
