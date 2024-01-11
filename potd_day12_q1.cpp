#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define all(a) (a).begin(), (a).end()
#define all_G(a) (a).begin(), (a).end(), greater<int>() 


int main() {

    ll t;
    cin>>t;

    
    for(int j = 0; j < t; j ++){
        ll n ;
        cin>>n; 
        vector<int>v;
        for(int i = 0; i < n; i ++){
            ll x ;
            cin>>x;
            v.push_back(x);
        }
        sort(all(v));

        cout<<max((ll)v[0]*v[1], (ll)v[n-1]*v[n-2])<<endl;
    }    

    return 0;
}