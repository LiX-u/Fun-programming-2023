#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> a[105];
int cnt[105];
bool vis[105];
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int x;
        for(int j=1;j<n;j++){
            cin>>x;
            a[i].push_back(x);
        }
        cnt[i]=0;
    }
    int p=0;
    int dd=0;
    int day=1;
    for(day=1;day<=n*(n-1)/2;day++)
    {
        bool f=1;
        for(int i=1;i<=n;i++){
            if(cnt[i]<n-2){
                f=0;
                break;
            }
        }
        if(f) break;
        for(int i=1;i<=n;i++) vis[i]=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(i==j||vis[i]||vis[j]) continue;
                if(a[i][cnt[i]]==j&&a[j][cnt[j]]==i){
                    cnt[i]++;
                    cnt[j]++;
                    vis[i]=1;
                    vis[j]=1;
                }
            }
        }
    }
    if(day>n*(n-1)/2) cout<<-1<<endl;
    else cout<<day<<endl;

}