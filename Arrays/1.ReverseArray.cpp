#include<bits/stdc++.h>
using namespace std;

void printArray(vector<int> arr,int n){
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void reverseArray(vector<int> &arr,int n){
    int i = 0;
    int temp;
    
    while(i<n/2){
        temp = arr[i]; 
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
        i++;
    }
    
}

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    int data;
    for(int i =0;i<n;i++){
        cin>>data;
        arr.push_back(data);
    }
    
    reverseArray(arr,n);
    printArray(arr,n);
    cout<<endl;
    return 0;
}