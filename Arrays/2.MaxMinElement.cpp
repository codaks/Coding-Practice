#include<bits/stdc++.h>
using namespace std;

int findMax(vector<int>arr,int s,int e){
    
    int n = e-s+1;
    
    if(n ==1){
        return arr[s];
    }
    else if(n==2){
        if(arr[s]>arr[e])
            return arr[s];
        else 
            return arr[e];
    }
    else{
        int m =  s + (e-s)/2;
        int local_max1 = findMax(arr,s,m);
        int local_max2 = findMax(arr,m+1,e);
        if(local_max1>local_max2){
            return local_max1;
        }
        else{
            return local_max2;
        }
    }
}

int findMin(vector<int>arr,int s,int e){
    
    int n = e-s+1;
    
    if(n ==1){
        return arr[s];
    }
    else if(n==2){
        if(arr[s]<arr[e]){
            return arr[s];
        }
        else{ 
            return arr[e];
        }
    }

    else{
        int m =  s + (e-s)/2;
        int local_min1 = findMin(arr,s,m);
        int local_min2 = findMin(arr,m+1,e);
        if(local_min1<local_min2){
            
            return local_min1;
        }
        else{
            
            return local_min2;
        }
    }
}


void printArray(vector<int> arr, int n){
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int max = findMax(arr,0,n-1);
    int mins = findMin(arr,0,n-1);

    cout<<"Max: "<<max<<" Min: "<<mins;
    return 0;
}