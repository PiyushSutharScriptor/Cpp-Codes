/*
    recursive function : >>A function is called inside a function
    iterative function : >>Control/Iterative statements are used
*/

#include <iostream>
using namespace std;
int recursivefactorial(int n){
    if(n<=1){
        return 1;
    }
    else{
        return n*recursivefactorial(n-1);
    }
}

int iterativefactorial(int n){
    if(n<=1){
        return 1;
    }
    else{
        int res = 1;
        for(int i=1 ; i<=n ; i++){
            res*=i;    
        }
        return res;
    }
}

int main(){
    int n=5;
    cout<<"Factorial Using Recursive Function : "<<recursivefactorial(n)<<endl;
    cout<<"Factorial Using Iterative Function : "<<iterativefactorial(n)<<endl;
}
