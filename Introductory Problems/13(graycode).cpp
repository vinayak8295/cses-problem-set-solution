#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
#define  ll long long

vector<string> logic(int n)
{
    if (n == 1)
    {
      return {"0","1"};
    }
 
    
    vector<string> rec=
          logic(n-1);
    vector<string> main;
     
   
    for(int i=0;i<rec.size();i++)
    {
      string s=rec[i];
      main.push_back("0"+s);
    }
     
    for(int i=rec.size()-1;i>=0;i--)
    {
       string s=rec[i];
       main.push_back("1"+s);
    }
    return main;
}
 

void out(int n)
{
    vector<string> arr;
    arr=logic(n);
    
    for (int i = 0 ; i < arr.size();
         i++ )
        cout << arr[i] << endl;
}
 

int main()
{  ll n;
  cin>>n;
    out(n);
    return 0;
}