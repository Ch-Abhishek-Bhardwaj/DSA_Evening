#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    int largest;
    int sum = 0;
    for(int i=0;i<5;i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
        sum += arr[i];
    }
    cout<<sum-largest;
    return 0;
}