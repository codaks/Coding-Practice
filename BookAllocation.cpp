#include <bits/stdc++.h> 
using namespace std;


int allocateBooks(vector<int> arr, int n, int m) {
    // Write your code here.
        int books  = n;
        int students = m;
        if(m>n){
            return -1;
        }
        int end = 0;
        int start = 0,mid ;
        for(int i = 0;i<books;i++){
            end+= arr[i];
        }
        int min = INT_MAX;
        int max = INT_MAX;
        while(start<=end){
            // cout<<"INSIDE BINARY SEARCH"<<endl;
            mid = start + (end-start)/2;
            // cout<<"Start: "<<start<<"     mid: "<<mid<<"     end:"<<end<<endl;
            int j = 0;
            int i = 0;
            int curr_sum = 0;
            int curr_max = INT_MIN;
            while(i<n){
                while(curr_sum+arr[i]<=mid && i<n){
                    // cout<<arr[i]<< " ";
                    curr_sum+=arr[i];
                    i++;
                }
                // cout<<"CURR_SUM: "<<curr_sum<<" Mid:"<<mid<<endl;
                if(curr_sum>curr_max)
                    curr_max = curr_sum;
                if(arr[i]>mid){
                    break;
                }
                j++;
                curr_sum =0;
            }
            // cout<<j<<endl;

            // cout<<curr_max<<" "<<max<<endl;
            if (j == m && curr_max < max) {
                // cout<<"Conditition true for "<<curr_max<< "> "<<max<<endl;
              max = curr_max;
              
              if (max < min) {
                min = max;
              }
            }


            if(j>m || arr[i]>mid)
                start = mid + 1;
            else
                end = mid - 1;
            
                    
        }
        return min;
}

int main(){
    vector<int> vct;
    int n,data,m;
    cin>>n>>m;
    for(int i =0;i<n;i++){
        cin>>data;
        vct.push_back(data);
    }

    int res = allocateBooks(vct,n,m);
    cout<<res;
    return 0;
}