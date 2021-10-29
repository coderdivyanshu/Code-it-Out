#include <bits/stdc++.h>
#define ll long long int
using namespace std;

#define loop(i, n) for (int i = 0; i < int(n); i++)

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

    ll t;
    // cin >> t;
    // while (t--)
    // {
        ll n, m;
       string s;
       cin>>s;
       ll count=0;
       ll count1=0;
       ll k=0;
       string s1="heavy";
       string s2="metal";
       for(ll i=0;i<s.length();i++){
        //    string r=s.substr(i,i+4);
           if(s[i]=='h' && s[i+1]=='e' && s[i+2]=='a' && s[i+3]=='v' && s[i+4]=='y'){
                        count++;
            //    for(ll j=(i+4);j<s.length();j++){
                //    string r1=s.substr(j,j+4);
           }
                  else if(s[i]=='m' && s[i+1]=='e' && s[i+2]=='t' && s[i+3]=='a' && s[i+4]=='l'){
                        k++;
                      count1+=(count*k);
                      k=0;
                   }
            //    }
        //    }

        //    }
       }
    cout<<count1<<"\n";
    // }

    return 0;
}