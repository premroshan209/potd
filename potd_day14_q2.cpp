///question
//https://codeforces.com/problemset/problem/118/A


#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define ld long double
#define all(a) (a).begin(), (a).end()
#define all_G(a) (a).begin(), (a).end(), greater<int>() 
 
int main() {
    string str;
    cin>>str;
 
    int t = str.size();
    string ans;
   
    
    for(int j = 0; j < t; j ++){
 
        if(str[j] == 'A' || str[j] == 'O' || str[j] == 'Y' || str[j] == 'E' || str[j] == 'U' || str[j] == 'I'){
            continue;
        }
        else if(str[j] == 'a' || str[j] == 'o' || str[j] == 'y' || str[j] == 'e' || str[j] == 'u' || str[j] == 'i'){
            continue;
        }
        else{
            if(str[j] >= 'A' && str[j] <= 'Z') str[j] = str[j] + ('a' - 'A');
            ans.push_back('.');
            ans.push_back(str[j]);
        }
      
        
    }  
 
    cout<<ans;  
    return 0;
}