#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int data;
    vector<int> arr;

    for(int i=0;i<n;i++){
        cin>>data;
        arr.push_back(data);
    }
    int temp;

    int flag = 1;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                flag = 0;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            if(flag)
                break;
        }
    }
    cout<<"Sorted Array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }    
    return 0;
}