#include <iostream>
using namespace std;
int main(){
    //if else
    int a = 10;
    if(a>5){
        cout<<"Number is positive"<<endl;
    }
    else if(a<0){
        cout<<"Number is Negative"<<endl;
    }
    else{
        cout<<"Number is equal to zero"<<endl;
    }

    //For loop : 
    for(int i=0 ; i<=5 ; i++){
        cout<<i<<endl;
    }

    //While loop : 
    int b = 1;
    while(b<6){
        cout<<"While loop : "<<b<<endl;
        b++;
    }

    //Do while loop :
    int c = 10 ;
    do{
        cout<<"DoWhile value : "<<c<<endl;
    }while(c<5);

    //Switch Statement : 
    char rank = 'B';
    switch(rank){
        case'A' :
        cout<<"Grade : A"<<endl;
        break;
         
        case 'B':
        cout<<"Grade : B"<<endl;
        break;

        default :
        cout<<"Fail"<<endl;
    }
}