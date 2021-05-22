/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;


template <typename X> inline void pl(X ab) {cout<<ab<<endl;}
template <typename X> inline void ps(X ab) {cout<<ab<<" ";}
#define ww int pp;cin>>pp;while(pp--) fnc();
#define ar long long int arr[n];for(i=0;i<n;i++) cin>>arr[i];
#define ss string s;cin>>s;
inline void fnc() {
    long long int n,i,t;
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    map<char,int>m;
    for(i=0;i<s.length();i++) {m[s[i]]++;}
    if(m.size()<3) {pl("Dynamic");}
    else {
        t=1;
        vector<int>v(m.size());
        i=0;
        for(auto it:m) {v[i]=it.second;i++;}
        sort(v.begin(),v.end());
        if(m.size()>3 && v[3]!=v[1]+v[2]) {swap(v[0],v[1]);}
        for(i=2;i<m.size();i++) {
            if(v[i]!= v[i-1]+v[i-2]){t=0;break;}
        }
        pl(t?"Dynamic":"Not");
    }
}
int main()
{
    ww
    return 0;
}
