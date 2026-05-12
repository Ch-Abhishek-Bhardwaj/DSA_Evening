#include<bits/stdc++.h>
// #include<vector>
using namespace std;


bool printF(int idx, vector<int> &ds , int s , int sum , int arr[], int n){
    if(idx == n){
        if(s== sum){
            for(auto it: ds){
                cout<<it<<" ";
                
            }
            cout<<endl;
                return true;

        }
        else return false;
    }

    ds.push_back(arr[idx]);
    s+= arr[idx];
    if(printF(idx+1 ,ds , s , sum ,arr , n )== true){
        return true ;
    }

    s-=arr[idx];
    ds.pop_back();
    
    if(printF(idx+1 , ds , s , sum , arr , n)== true) return true;


    return false;


}


int main(){
    int arr[] = {1,2,1};
    int n=3;
    int sum =4;
    vector<int> ds;
    printF(0, ds , 0 , sum , arr , n);

    return 0;
}