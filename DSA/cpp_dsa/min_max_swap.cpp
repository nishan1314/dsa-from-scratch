#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
    
    int a,b,c,d;
    cin>>a>>b>>c>>d;


    int mn=min({a,b,c,d});
    int mx=max({a,b,c,d});

    cout<< mn <<" "<<mx<<endl;

    swap(a,d);

    cout<<a<<" "<<b<<" "<<c<<" "<<d;
    return 0;
}