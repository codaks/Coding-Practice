#include<bits/stdc++.h>
using namespace std;


void merg(vector<int> &arr,int start,int mid, int end){

    cout<<"Inside Merg Function\n ";
    cout<<"Start: "<<start<<" Mid: "<<mid<<" End: "<<end<<endl;

    int i =start;
    int j = mid+1;
    int k = 0;
    vector<int>temp (end - start +1 );
    while(i<j && i<=mid && j<=end){

        if(arr[i]<arr[j]){
            temp[k] = arr[i];
            cout<<temp[k]<<" "<<arr[i]<<"...";
            i++;
            k++;
            
        }
        else{
            temp[k] = arr[j];
            cout<<temp[k]<<" "<<arr[j]<<"...";
            j++;
            k++;
        }
    }

    while(i<=mid){
        temp[k] = arr[i];
        i++;
    }
    while(j<=end){
        temp[k] = arr[j];
        j++;
    }
    k =0;
    for(i = start; i<end;i++){
        arr[i] = temp[k];
    }
    return ;
}

void mergSort(vector<int> arr,int start, int end){

    int mid;
    if(start<end){
        mid = start +(end-start)/2;
        mergSort(arr,start,mid);
        mergSort(arr,mid+1,end);
        merg(arr,start,mid,end);
    }
    return;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr;
    int data;
    for(int i =0;i<n;i++){
        cin>>data;
        arr.push_back(data);
    } 

    cout<<"Original Array: ";
    for(int  i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    mergSort(arr,0,n-1);

    cout<<"Sorted Array: ";
    for(int  i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}