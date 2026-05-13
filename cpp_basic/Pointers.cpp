// Pointers => Special variable that stores the memory address of another variable
// & => address of operator
// * => dereference operator

// it a= 10;
// int* p = &a;
// p will store the address of a


#include<iostream>
using namespace std;

// int main(){
//     int a=10;
//     int* p=&a;
//     cout<<"1=>"<<p;
//     cout<<endl;
//     cout<<"2=>"<<*p<<endl;

//     // pointer to pointer
//     int x= 12;
//     int* pp = &x;
//     int** ppp = &pp;

//     cout<<"3=>"<<&pp<<endl;
//     cout<<"4=>"<<ppp<<endl;
//     cout<<"5=>"<<*pp<<endl;
//     cout<<"6=>"<<*(&x)<<endl;

//     return 0;

// }

// Null pointer
//=> A pointer that doesnot point to any location.

// int main(){
//     int* p = NULL;
//     cout<<p;
// }

// pass by reference
//=> When we pass a variable to a function, the function can modify the value of the variable.

// void channgeA(int* a){
//     *a=90;
// }

// int main(){
//     int a=10;
//     channgeA(&a);
//     cout<<a;
// }

//Alias => Another name for a variable
//=> 
// void changeB(int &b){
//     b=50;

// }
// int main(){
//     int a = 10;
//     changeB(a);
//     cout<<a;
// }

// array of pointers
// int main(){
//     int arr[]{1,2,3};
//     cout<<*arr;

//     int a=90;
//     arr = &a;// error => cannot assign to variable 'arr' with const-qualified type 'int *const'
//     cout<<*arr;
    
// }

// pointer Arithmetic
// Increeament and Decreement
int main(){
    int a=10;
    int* p = &a;
    cout<<p<<endl;
    p++;
    cout<<p<<endl;
    p--;
    cout<<p<<endl;
}