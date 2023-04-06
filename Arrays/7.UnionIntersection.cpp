#include<bits/stdc++.h>
using namespace std;


int unionSize(vector<int> arr1,int n , vector<int> arr2,int m){
    set<int> sets;
    for(int i = 0;i<n;i++){
        sets.insert(arr1[i]);
    }
    for(int i = 0;i<m;i++){
        sets.insert(arr2[i]);
    }
    return sets.size();
}

void printArray(vector<int> arr, int n){
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<int> arr1(n) ;
    vector<int> arr2(m);
    for(int i =0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i =0;i<m;i++){
        cin>>arr2[i];
    }

    int size_union = unionSize(arr1,n,arr2,m);
    cout<<size_union<<endl;

    return 0;
}