// Question
// https://codeforces.com/problemset/problem/1665/A

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
        int x;
        cin>>x;
        
        if (x == 5) cout<<1<<" "<<2<<" "<<1<<" "<<1<<endl;
        else if(x % 4 == 0) cout<<x/4<<" "<<x/4<<" "<<x/4<<" "<<x/4<<endl;
        else if(x % 4 == 1) cout<<2<<" "<<x - 5<<" "<<2<<" "<<1<<endl;
        else if(x % 4 == 2) cout<<(x-2)/2+1<<" "<<(x-2)/2-1<<" "<<1<<" "<<1<<endl;
        else if(x % 4 == 3) cout<<2<<" "<<x - 5<<" "<<2<<" "<<1<<endl;
    }    
 
    return 0;
}