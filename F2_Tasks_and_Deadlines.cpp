#include <bits/stdc++.h>
#define ll long long int
using namespace std;

#define loop(i, n) for (int i = 1; i <= int(n); i++)

ll power(ll x, ll y, ll p)
{
    ll res = 1; // Initialize result
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = ((res % p) * (x % p)) % p;
        // y must be even now
        y = y >> 1;                  // y = y/2
        x = ((x % p) * (x % p)) % p; // Change x to x^2
    }
    return res % p;
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    ll n,i,c=0,k=0;
    cin>>n;
   vector<pair<ll,ll>>v;
   for(i=0;i<n;i++)
   {
     ll x,y;
     cin>>x>>y;
     v.push_back({x,y});
   }
   sort(v.begin(),v.end());
   for(auto&i:v)
   {
     c+=i.first;
     k+=i.second-c;
   }
cout<<k<<"\n";



    

    return 0;
}