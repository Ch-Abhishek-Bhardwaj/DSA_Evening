#include<iostream>
using namespace std;

int main(){
    int arr[5] = {2,65,2,45,2};
    int key = 2;

    int count = 0;
    for(int i=0;i<5;i++){
        if(arr[i] == key){
            count++;
        }
    }

    cout<<count;
    
    return 0;

}