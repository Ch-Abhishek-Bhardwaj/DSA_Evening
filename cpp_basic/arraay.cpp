#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //printing 
    // for(int i=0;i<n;i++){
    //     cout<<i<<"=>";
    //     cout<<arr[i]<<" "<<endl;
    // }
    //reverse

    for(int i=0;i<n/2;i++){
        int temp = arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    return 0;
}