#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
#define ll long long
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=0;
    ll sum=0;
    for(int i=0;i<n;i++){
        if(s[i]=='z'){
            cnt++;
            sum+=cnt;
        }
        else cnt=0;
    }
    cout<<sum<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}