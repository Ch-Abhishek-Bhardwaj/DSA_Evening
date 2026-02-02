#include<iostream>
using namespace std;

int main(){
    int arr[5]= {2,63,84,25,34};
    int largest=0, secondlargest=0;
    for(int i=0;i<5;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
        if(arr[i]>secondlargest && arr[i]<largest){
            secondlargest = arr[i];
        }

    }

    cout <<largest<<"  "<<secondlargest;
    return 0;
}