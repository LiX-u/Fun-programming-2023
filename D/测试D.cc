#include<iostream>
#include<algorithm>
#include<set>

using namespace std;

int main(){
    int n;
    cin>>n;
    int x;
    set<int> se;
    for(int i=1;i<=n;i++){
        cin>>x;
        if(x){
            se.insert(x);
            se.insert(i);
        }
    }
    cout<<se.size()<<endl;
    return 0;
}