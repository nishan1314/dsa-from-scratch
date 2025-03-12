#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
    

    int x;
    cin>>x;

    switch(x%2){
        case 0:
            cout<<"Even Number";
            break;
        case 1:
            cout<<"Odd Number";
            break;
    }
    return 0;
}