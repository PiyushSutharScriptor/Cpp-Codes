#include <iostream>
using namespace std;
int main(){
    int *ptr = (int*)malloc(sizeof(int));
    *ptr = 20;
    cout<<"The value after malloc : "<<*ptr<<endl;

    free(ptr);
    cout<<"The value after free : "<<*ptr<<endl;

    ptr = new int(50);
    cout<<"The value after new : "<<*ptr<<endl;

    delete(ptr);
    cout<<"The value after delete : "<<*ptr<<endl;
    return 0;
}