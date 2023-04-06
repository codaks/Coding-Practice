#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;

    int data;
    vector<int> arr;
    for(int i = 0;i<n;i++){
        cin>>data;
        arr.push_back(data);
    }

    int start = 0,end = n-1;
    int mid;
    while(start<=end){
        mid = start - (end-start)/2;
    }
    
    return 0;
}