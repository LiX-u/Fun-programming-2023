#include<iostream>
#include<algorithm>

using namespace std;
#define ll long long
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    int cnt1=0;
    ll sum=0;
    ll w=0;
    for(int i=n-1;i>=0;i--){
        if(a[i]<=0){
            if(a[i]%2){
                if(abs(a[i])<w)
                    w=-a[i];
            }
            continue;
        }
        if(a[i]%2) cnt1++,w=a[i];
        sum+=a[i];
    }
    if(cnt1%2){
        cout<<sum<<endl;
        return 0;
    }
    cout<<sum-w<<endl;
    
}