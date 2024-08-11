#include <iostream>
using namespace std;
int globalvariable = 20;
int main(){
    int localvariable = 10;
    int intvar = 500;
    float flovar = 50.25;
    char charvar = 'P';
    bool boolvar = true;


    cout<<"Global Variable : "<<globalvariable<<endl;
    cout<<"Local Variable : "<<localvariable<<endl;
    cout<<"Integer : "<<intvar<<endl;
    cout<<"Float : "<<flovar<<endl;
    cout<<"Character : "<<charvar<<endl;
    cout<<"Boolean : "<<boolalpha<<boolvar<<endl;
}