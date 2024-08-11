#include <iostream>
using namespace std;
int main(){
    int a = 10;
    int *ptr = &a;

    cout<<"Value of a: "<<a<<endl;
    cout<<"Adress of a: "<<&a<<endl;
    cout<<"Adress of *ptr: "<<&*ptr<<endl;
    cout<<"Adress of ptr: "<<&ptr<<endl;
    cout<<"Value of *ptr: "<<*ptr<<endl;

    cout<<endl;

    int arr[6] = {10,20,30,40,50,60};
    int *ptr2 = arr;
    for (int i=0 ; i<6 ;i++){
        cout<<"The address at index ("<<ptr2<<") is : "<<*ptr2<<endl;
        ptr2++;
    }
     
    /*
        In the above case :
        ptr2 = used to retrieve loaction
        *ptr2 = used to retrieve values of array 
    */

    cout<<endl;

    int s1 = 10;
    float s2 = 90.25;
    char s3 = 'P';
    bool s4 = true;

    cout<<"Size of integer : "<<sizeof(s1)<<endl;
    cout<<"Size of float : "<<sizeof(s2)<<endl;
    cout<<"Size of Character : "<<sizeof(s3)<<endl;
    cout<<"Size of bollean : "<<sizeof(s4)<<endl;
     

}