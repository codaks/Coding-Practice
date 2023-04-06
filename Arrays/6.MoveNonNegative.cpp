#include<bits/stdc++.h>
using namespace std;

void moveNonNegative(vector<int> &arr,int n){
    int min_nn = 0;
    int min_nn_index = 0;
    for(int i = 0;i<n;i++){
        if(arr[i]>0 && arr[i]<min_nn){
            min_nn = arr[i];
            min_nn_index = i;
        }
    }
    int piviot = min_nn;
    int i = 0;
    int j = n-1;
    while(i<j){
        while(arr[i]<piviot && i<n){
            i++;
        }
        while(arr[j]>piviot && j>=0){
            j--;
        }
        if(i<j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[j];
    arr[j] = arr[min_nn_index];
    arr[min_nn_index] = temp;
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

    moveNonNegative(arr,n);
    printArray(arr,n);
    return 0;
}