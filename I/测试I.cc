#include<iostream>
#include<algorithm>

using namespace std;
#define ll long long
ll sum[35];
void init(){
    sum[0]=0;
    for(int i=1;i<32;i++){
        sum[i]= (1<<(i-1)) +sum[i-1]*2;
        //cout<< sum[i] <<endl;//到达2^i-1的位置
    }
    for(int i=0;i<32;i++){
        sum[i]+=1<<i;
        //cout<<sum[i]<<endl;//到达2^i的位置
    }
}
ll solve(ll a,ll b){
    if(a>b) return 0;
    ll x,y;
    for(int i=0;i<=32;i++){
        if(a<= (1<<(i))){
            x=i;
            break;
        }
    }
    for(int i=0;i<=32;i++){
        if(b<(1<<i)){
            y=i-1;
            break;
        }
    }
    ll lx,ly;
    ll rx,ry;
    ll md1=1<<(x-1),md2=1<<y;
    ly=md1-(a-md1);
    lx=md1-((1<<x)-1-md1);
    rx=md2-(b-md2);
    ry=md2-((1<<y)+1-md2);
    if(y>=x){
        return sum[y]-sum[x]+ (1<<x) +solve(lx,ly)+solve(rx,ry);
    }
    else{
        ll md=1<<(x-1);
        return solve(md-(b-md),md-(a-md));
    }
}
int main(){
    init();
    ll a,b;
    cin>>a>>b;
    ll ans=solve(a,b);
    cout<<ans<<endl;
}