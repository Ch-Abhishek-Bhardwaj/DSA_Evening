#include<bits/stdc++.h>
using namespace std;

int f(int arr[],int low , int high){
    int pivot = arr[low];
    int i=low;
    int j=high;

    while(i<j){
        while(arr[i]<= pivot && i<=high-1){
            i++;
        }
        while(arr[j]>=pivot && j>=low-1){
            j--;
        }
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;
}


void qs(int arr[], int low , int high){
    if(low<high){
        int pidx = f(arr , low , high);
        qs(arr, low ,pidx-1 );
        qs(arr, pidx+1,high );
    }
}



int main(){

    int arr[] = {2,1,4,6,7,3,9};
    qs(arr , 0, 6);
    for(int i=0; i<=6;i++){
        cout<<arr[i];
    }

    return 0;
}