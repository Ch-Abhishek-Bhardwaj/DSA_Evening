// printing Subsequence whose sum is K
 #include<bits/stdc++.h>
 using namespace std;

 void sumF(int idx , vector<int> ds , int s , int sum , int arr[], int n){
    if(idx == n){
        if(s == sum){
            for(auto it  : ds){
                cout<<it <<" ";
            }
            cout<<endl;
        }
        return ;
    }

    ds.push_back(arr[idx]);
    s+= arr[idx];
    sumF(idx+1 , ds , s , sum , arr, n);
    s -= arr[idx];
    ds.pop_back();
    sumF(idx+1 ,ds ,s , sum , arr , n);
 }



 int main(){
    int arr[]= {1,2,1,3};
    int n = 4;
    int sum = 3;
    vector<int> ds;
    sumF(0,ds , 0, sum , arr , n );

    return 0;
 }