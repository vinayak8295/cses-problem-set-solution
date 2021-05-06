#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define  ll long long


int main()
{   string s;
    cin >> s;
    ll b=0;
    ll l = s.size() - 1;
    string check ;
    map<char, string> m ;
    char array[s.size()];
    for (char c : s)
    {
      if (m.count(c))
      {
        m[c] +=c;
      }
      else{
        m[c] = c;
      }

    }
   map<char, string>::iterator itr;
    if (s.size()%2 == 0)
    {
      for (itr = m.begin(); itr != m.end(); ++itr)
      {
        if (itr->second.size()%2 != 0 )
        {
          check = "NO SOLUTION";
          break;
        }
      }
      if (check == "NO SOLUTION" )
      {
        cout<<check;
      }
      else{
        char array[s.size()];

    for (itr = m.begin(); itr != m.end(); ++itr) {
        for (int i = 0; i < itr->second.size()/2 ; ++i)
        {
          array[b] = itr->first ;
          array[l] = itr->first ;
          b++;
          l--;
        }

      }


       for (int i = 0; i < s.size(); ++i)
       {
         cout<<array[i];
       }
        
      }

    }
    else
    {
      ll odd = 0;
       for (itr = m.begin(); itr != m.end(); ++itr)
      {
        if (itr->second.size()%2 != 0 )
        {
          odd++ ;
        }
      }
      if (odd!=1)
      {
        cout<<"NO SOLUTION";
      }
      else{
        ll mid;
        mid = (s.size()+1)/2 - 1 ;
     for (itr = m.begin(); itr != m.end(); ++itr) {
      if (itr->second.size()%2 != 0)
      {
         array[mid] = itr->first ;
         itr->second= itr->second.substr (0 ,itr->second.size() - 1);
        break;
       }
     }
    for (itr = m.begin(); itr != m.end(); ++itr) {
        if (itr->second.size() >= 2)
      { 
         for (int i = 0; i < itr->second.size()/2 ; ++i)
        {
          array[b] = itr->first ;
          array[l] = itr->first ;
          b++;
          l--;
        } 
       }
    }
       for (int i = 0; i < s.size(); ++i)
       {
         cout<<array[i];
       }

      }

    }
    return 0;
      }

