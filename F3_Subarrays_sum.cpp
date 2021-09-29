#include<bits/stdc++.h>
#define ll long long int
using namespace std;


#define loop(i,n) for(int i = 0;i < int(n);i++)


ll power(ll x,ll y,ll p)
{
ll res = 1;     // Initialize result
while (y > 0)
{
// If y is odd, multiply x with result
if (y & 1)
res = ((res%p)*(x%p))%p;
// y must be even now
y = y>>1; // y = y/2
x = ((x%p)*(x%p))%p;  // Change x to x^2
}
return res%p;
}


//  sort(a.begin(), a.end(), [](int x, int y) {
// 	return x % 2 < y % 2;
//   });
//   By this vector will sort in such a way that firstly even digits will print in any order
//    then odd will print any order




// <<<ALWAYZ HAPPY BECOZ HANUMAN IS ALWAYZ WITH ME>>
// <<<<<<MERE HANUMAAN>>>>>>
// <<<Jai Shree RaaM>>>


//MAI KAUN HU, TUMSE MAI KYA KAHU
//HAI SACH TOH YE DOSTON, I AM BEST...WOHOO
 //JUST A NOOB :)


int main(){
ios_base::sync_with_stdio(false); 
cin.tie(NULL); 

    ll n,x,i,c=0,k=0;
    cin>>n>>x;
    ll a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    // for(i=0;i<n-1;i++)
    // a[i]+=a[i+1];
    ll l=0,r=0;
    
    while(l<=r)
    {  
      if(r>n)
      break;
      if(k<x)
      {
      k+=a[r];
      r++;
      }
      if(k==x)
      {
      c++;
      k+=a[r];
      r++;
      }
      if(k>x)
      {
        k-=a[l];
        l++;
        if(k==x)
        {
        c++;
        k+=a[r];
        r++;
        }
      }
    }
    cout<<c<<"\n";






    return 0;
}
