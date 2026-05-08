#include<iostream>
using namespace std;

void rev(int arr[],int start, int end){
    if(start>=end){
        return ;
    }
    swap(arr[start],arr[end]);
    rev(arr,start+1,end-1);
}

int main(){
    int arr[5] = {1,2,3,4,5};
    rev(arr, 0,4);
    cout << "Reversed array: ";
    for(int i=0;i<5;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;

}