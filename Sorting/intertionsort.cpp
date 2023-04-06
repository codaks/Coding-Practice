#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> arr;
    int data;

    for(int  i =0;i<n;i++){
        cin>>data;
        arr.push_back(data);
    }
    int j;
    for(int i = 1;i<n;i++){
        j = i;
        data = arr[i];
        while(j>0 && arr[j]<arr[j-1]){
            arr[j] = arr[j-1];
            j--;
        }
        arr[j] = data; 
    }

    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}