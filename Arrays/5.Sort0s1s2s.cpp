#include<bits/stdc++.h>
using namespace std;

void Sort(vector<int> &arr,int n){
    
    int zeros=0,ones=0,twos=0;

    for(int i=0;i<n;i++){
        if(arr[i]==0)
            zeros++;
        else if(arr[i]==1)
            ones++;
        else 
            twos++;
    }

    int i=0;
    while(zeros){
        arr[i]=0;
        zeros--;
        i++;
    }
    while(ones){
        arr[i]=1;
        ones--;
        i++;
    }
    while(twos){
        arr[i]=2;
        twos--;
        i++;
    }
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
    

    return 0;
}