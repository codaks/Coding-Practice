#include<bits/stdc++.h>
using namespace std;

int minimizeHeight(vector<int> arr, int n,int k){
    sort(arr.begin(),arr.end());
    int minmize_ht = INT_MAX;

    for(int i=0;i<n;i++){
        int min_ht = min(arr[0]+k,arr[i]-k);
        int max_ht = max(arr[i-1]+k,arr[n-1]-k);
        if(max_ht-min_ht<minmize_ht){
            minmize_ht = max_ht-min_ht;
        }
    }
    return minmize_ht;
}

void printArray(vector<int> arr, int n){
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    int min_height = minimizeHeight(arr,n,k);
    cout<<min_height;

    return 0;
}