#include<bits/stdc++.h>
using namespace std;


void merg(int arr[],int start,int mid, int end){

    

    int i =start;
    int j = mid+1;
    int k = 0;
    int n = end - start +1;
    int temp[n];
    cout<<"Inside Merg Function\n ";
    cout<<"Start: "<<start<<" Mid: "<<mid<<" End: "<<end<<" n:"<<n<<endl;

    cout<<"Before modify: ";
    for(int m = start; m<=end;m++){
        cout<<arr[m]<<" ";
    }

    while(i<=mid && j <= end && i<j){
        if(arr[i]<arr[j]){
            temp[k] = arr[i];
            i++; 
        }
        else{
            temp[k] = arr[j];
            j++; 
        }
        k++;
    }
    while(i<=mid){
        temp[k] = arr[i];
        i++;
        k++;
    }
    while(j<=end){
        temp[k] = arr[j];
        j++;
        k++;
    }
    cout<<"After modify: ";
    i = start;
    for(int m = 0; m<k;m++){
        arr[i] = temp[m];
        cout<<arr[i]<<" ";
        i++;
    }
    cout<<endl<<endl<<endl<<endl;
    return ;
}

void mergSort(int arr[],int start, int end){

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
    int arr[n];
    //vector<int>arr;
    int data;
    for(int i =0;i<n;i++){
        cin>>arr[i];
        // cin>>data;
        // arr.push_back(data);
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