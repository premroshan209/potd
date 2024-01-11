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
        ll n , d;
        cin>>n>>d; 
        string s ;
        cin>>s;

        string ans;
        bool flag = 0;
        char ch = d + '0';
        
        for(int i = 0; i < n; i++){
            if(flag == 0 && d > s[i]-'0'){
                ans.push_back(ch);
                flag = 1;
            }
            ans.push_back(s[i]);
        }
        if(flag == 0) ans.push_back(ch);

        cout<<ans<<endl;

    }    

    return 0;
}