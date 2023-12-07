#include<iostream>
#include<algorithm>

using namespace std;

void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int cnt=0;
    for(int i=1;i<n;i++){
        if(a[i-1]>a[i])
            cnt=max(cnt,a[i-1]);
    }
    cout<<cnt<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}