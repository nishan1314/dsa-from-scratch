#include<bits/stdc++.h>
#define ll long long
using namespace std;

int *fun(){
    int *arr = new int[5];

    for(int i=0;i<5;i++){
        cin>>arr[i];
    }

    return arr;
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);

    int *n_array= fun();

    for(int i=0;i<5;i++){
        cout<<n_array[i]<<" ";
    }
    
    return 0;
}


// Why Use new Instead of malloc():
// new automatically calls the constructor, while malloc() does not.
// new is type-safe and does not require casting, while malloc() returns a void*.