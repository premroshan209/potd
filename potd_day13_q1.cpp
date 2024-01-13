// Question
//https://codeforces.com/problemset/problem/1672/A
 
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
        int n;
        cin>>n;
        int sum = 0;
        for(int i = 0; i < n; i ++){
            int x;
            cin>>x;
 
            sum += x / 2 - 1; // break into size of 2;
            if(x%2 == 0) sum += x / 2 ;  // total log of size 2;
            if(x%2 == 1) sum += x / 2 + 1;  // total log of size 2;
        }
 
        if(sum % 2 == 0) cout<<"maomao90";
        else cout<<"errorgorn";
        cout<<endl;
    }    
 
    return 0;
}