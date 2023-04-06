#include<bits/stdc++.h>
using namespace std;

int kadensAlgo(vector<int> arr, int n){
    int cur_sum = 0;
    int global_sum = INT_MIN;
    for(int i = 0;i<n;i++){
        cur_sum += arr[i];
        if(cur_sum>global_sum)
            global_sum = cur_sum;
        if(cur_sum<0)
            cur_sum = 0;
    }
    return global_sum;
}


void printArray(vector<int> arr, int n){
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    int max_sum = kadensAlgo(arr,n);
    cout<<max_sum;

    return 0;
}