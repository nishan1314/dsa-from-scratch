#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
    
    int n;
    cin>>n;
    int *arr = new int[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }


    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}