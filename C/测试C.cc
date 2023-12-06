#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
#define ll long long
int main(){
    int s,v;
    cin>>s>>v;
    int k=s/v+(s%v==0?0:1);
    k+=10;
    int h=k/60,m=k-k/60*60;
    h=7-h;
    m=60-m;
    if(m==60) h++,m=0;
    if(h<0) h+=24; 
    printf("%02d:%02d",h,m);
    return 0;
}