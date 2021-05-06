#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
#define  ll long long
int main()
{
	 ll n , sum=0;
    
     cin>>n;
     sum = n*(n+1)/2;
     
     if ((sum)%2==0)
     {
         cout<<"YES"<<endl;
         if (sum%n == 0)
         {
            vector<ll> arr1, arr2;
             arr1.push_back(n);
             
             
             ll i = 1;
             ll sum1 = 0; 
             ll sum2 = 0;        
            while(n != arr1.size()+arr2.size() ){
                
                arr2.push_back(n-i);
                arr2.push_back(i);
                
                if (n == arr1.size()+arr2.size())
                {
                    break;
                }
                arr1.push_back(n-i-1);
                arr1.push_back(i+1);
                
                i = i+2;
            }
            cout<<arr1.size()<<endl;
           for (ll i = 0; i < arr1.size(); i++) 
            {cout << arr1[i] <<" ";
               }
               cout<<endl;
               cout<<arr2.size()<<endl;
               for (ll i = 0; i < arr2.size(); i++) 
            {cout << arr2[i] <<" ";
               }

         }
         else{
                 
            vector<ll> arr1, arr2;     
             ll i = 1;
             ll sum1 = 0; 
             ll sum2 = 0;        
            while(n != arr1.size()+arr2.size() ){
                
                arr2.push_back(n + 1 -i);
                arr2.push_back(i);
                
                if (n == arr1.size()+arr2.size())
                {
                    break;
                }
                arr1.push_back(n-i);
                arr1.push_back(i+1);
                
                i = i+2;
            }
            cout<<arr1.size()<<endl;
           for (ll i = 0; i < arr1.size(); i++) 
            {cout << arr1[i] <<" ";
               }
               cout<<endl;
               cout<<arr2.size()<<endl;
               for (ll i = 0; i < arr2.size(); i++) 
            {cout << arr2[i] <<" ";
               }
 


         }
     }
     else{
        cout<<"NO";
     }
    return 0;
}
