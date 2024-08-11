/*
    call by value : >> A copy of actual variable is sent to the function
                    >> No changes is found in actual variable.

    call by reference : >> Actual variable is sent to the function.
                        >> Changes made by function directly affect 
                           the actual variable's value.
*/

#include <iostream>
using namespace std;
int callbyvalue(int num){
    num*=num;
    cout<<"SquareByValue : "<<num<<endl;
}

int callbyreference(int &num){
    num*=num;
    cout<<"SquareByReference : "<<num<<endl;
}

int main(){
    int num = 5;
    callbyreference(num);
    callbyvalue(num);
}