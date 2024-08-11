#include <iostream>
using namespace std;
int printarray(int a[] , int size){
    for(int i=0 ; i<size ; i++){
        cout<<a[i]<<" ";
    }
}

int printmultiarray(int m[][2] , int size1 , int size2){  //m[][one is mandatory]
    for(int i=0 ;i<size1 ;i++){
        for(int j=0 ; j<size2 ; j++){
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    //Single Dimensional array : 
    int a[4] = {5,9,1,8};
    printarray(a,4);

    cout<<endl;

    //Multi Dimensional Array : 
    int m[3][2] = {{1,2} , {3,4} , {5,6}};
    printmultiarray(m,3,2);
}