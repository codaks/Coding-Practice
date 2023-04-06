#include<bits/stdc++.h>
using namespace std;

int minmizeJumps(vector<int> arr,int n){
    int step = 0;
    int i = 0;
    cout<<"Intial Step at "<<arr[i]<<endl;
    while(i<n){
        if(arr[i]==0 && i<n-1)
            return -1;
        if(arr[i]==1){
            
            i+=1;
            cout<<"Inside if Step at "<<arr[i]<<endl;
            step++;
        }
        else{
            int max= 0;
            cout<<"Checking for: ";
            for(int k=1;k<=arr[i];k++){
                cout<<arr[i+k]<<" ";
                if(arr[i+k]>arr[max]){
                    max = i+k;
                }
                if(i+k>=n){
                    return step+1;
                }
            }
            cout<<endl;
            if(max==0){
                return -1;
            }
            
            i+=arr[max];
            cout<<"Inside else Step at "<<arr[i]<<endl;
            step++;
            
        }
        
    }
    return step;    
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
    
    int steps = minmizeJumps(arr,n);
    cout<<"Total steps are "<<steps;

    return 0;
}