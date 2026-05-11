// print all subsequences -> a contigous / non contigous sequence which follow the order

#include<bits/stdc++.h>
using namespace std;

void printF(int idx, vector<int> &ds, int arr[], int n){
    if(idx >=n){
        for(auto it :ds){
            cout<< it <<" ";
        }
        if(ds.size()==0){
            cout<<"{ }";
        }
        cout<<endl;
        return ;
    }
    ds.push_back(arr[idx]);
    //take part
    printF(idx+1, ds,arr,n);
    // not take
    ds.pop_back();
    printF(idx+1, ds , arr , n);

}



int main(){
    int arr[]= {3,1,2};
    int n=3;
    vector<int> sd;
    printF(0,sd, arr,n);

    return 0;
}