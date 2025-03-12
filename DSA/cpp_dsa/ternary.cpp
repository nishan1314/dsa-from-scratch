#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
    
    int n;
    cin>>n;


    string result=(n%2==0) ? "Even":"Odd";

    cout<<result<<endl;
    return 0;
}