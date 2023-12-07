#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

void solve(){
    int n;
    cin>>n;
    double a[n],b[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    double ans=n;
    for(int i=0;i<n;i++){
        double p=b[i]/1e5;
        ans=min(ans,(1/p-1)*(i+1-a[i])+i+1);
    }
    printf("%.2lf\n",ans);
}
int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}