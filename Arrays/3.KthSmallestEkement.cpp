#include<bits/stdc++.h>
using namespace std;


void buildMinHeap(vector<int> &vct, int n){
    
}

int findKSmallest(vector<int> vct,int n,int k){
    buildMinHeap(vct,n);
    return ;
}

int main(){
    
    int n;
    cin>>n;
    vector<int> vct(n);
    for(int i = 0;i<n;i++){
        cin>>vct[i];
    }

    int k;
    cin>>k;

    int k_smallest = findKSmallest(vct,n,k);

    return 0;
}