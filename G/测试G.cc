#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    int b[n];
    int cnt=0;
    for(int i=0;i<n;i++) cin>>a[i];
    b[++cnt]=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>=b[cnt])
            b[++cnt]=a[i];
    }
    cout<<cnt<<endl;
    for(int i=1;i<=cnt;i++){
        cout<<b[i];
        if(i<cnt) cout<<" ";
    }
    return 0;
}