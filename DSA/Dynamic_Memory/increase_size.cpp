#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
    int *arr1= new int[3];
    int *arr2= new int[3];

    for(int i=0;i<3;i++){
        cin>>arr1[i];
        arr2[i]=arr1[i];
    }

    delete [] arr1;

    arr1 = new int[5];

    for(int i=0;i<3;i++){
        arr1[i]=arr2[i];
    }

    arr1[3]=55;
    arr1[4]=100;

    for(int i=0;i<5;i++){
        cout<<arr1[i]<<" ";
    }
    return 0;
}

// We can increase size using dynamic array