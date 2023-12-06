#include<iostream>
#include<algorithm>

using namespace std;
#define ll long long

int main(){
    int n;
    cin>>n;
    int ma=0,x;
    ll sum=0;
    while(n--){
        cin>>x;
        sum+=x;
        ma=max(ma,x);
    }
    if(ma*2>sum) cout<<ma<<endl;
    else cout<<(sum+1)/2<<endl;
    return 0;
}