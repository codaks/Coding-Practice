#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n; 
    vector<int> arr;
    int data;
    
    for(int i =0;i<n;i++){
        cin>>data;
        arr.push_back(data);
    }
    int temp;
    for(int i =0 ;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout<<"Sorted Array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }    
    return 0;
    
}