#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
#define  ll long long
int main()
{
	 int n ;
     cin>>n;
     int j=0 , k=0;
     int a[n];
     int e[n];
     int o[n];  
     if (n==2 || n==3)
     {
         cout<<"NO SOLUTION";
     }
     else
        if (n==4)
        {
            cout<<"2 4 1 3";
        }
     else{
      for (int i = 0 ; i<n ; ++i)
      {
          a[i] = i + 1;
      }
     
     for (int i = 1 ; i <=n ; ++i)
     {
         if (i%2 == 0)
         {
             e[j] = i ;
             j++;
         }
         else
         {
            o[k] = i;
            k++;
         }
     }
    
     for (int i = 0; i < k + j; i++) {
        if (i < k) {
            a[i] = o[i];
        }
        else {
            a[i] = e[i - k];
        }
    }

    for (int i = 0; i < n; ++i)
    {
        cout<<a[i]<<" ";
    }
}
    return 0;
}
