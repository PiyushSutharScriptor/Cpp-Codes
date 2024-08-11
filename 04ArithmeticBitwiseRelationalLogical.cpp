/*
    Arithmetic Operators : 
    Addition : +
    Subtraction : -
    Multiplication : 
    Division : / 
    Modulus : %

    Bitwise Operators : 
    AND : &
    OR : |
    XOR : ^
    NOT : ~
 
    Relational : 
    Equalto : ==
    NotEqualto : !=
    Greater than : >
    Smaller than : <
    Greater than equals to  : >=
    Smaller than equals to  : <=

    Logical Operators : 
    AND : && 
    OR :  ||
    NOT : !
*/

#include <iostream>
using namespace std;
int main(){
    int a = 10;
    int b = 5;

    //Arithmetic Operators : 
    int addition = a+b;
    int subract = a-b;
    int multiplication = a*b;
    int division = a/b;
    int modulus = a%b;

    cout<<"Arithmetic Operators"<<endl;
    cout<<"Addition : "<<addition<<endl;
    cout<<"Subtraction : "<<subract<<endl;
    cout<<"Multiplication : "<<multiplication<<endl;
    cout<<"Division : "<<division<<endl;
    cout<<"Modulus : "<<modulus<<endl;

    cout<<endl;

    //Bitwise Operator :
    int bitwiseand = a&b;
    int bitwiseor = a|b;
    int bitwisexor = a^b;
    int bitwisenot = ~a;

    cout<<"BitwiseAnd : "<<bitwiseand<<endl;
    cout<<"BitwiseOr : "<<bitwiseor<<endl;
    cout<<"BitwiseXor : "<<bitwisexor<<endl;
    cout<<"BitwiseNot : "<<bitwisenot<<endl;

    cout<<endl;

    //Relational Operator : 
    bool equalsto = a==b;
    bool notequalsto = a!=b;
    bool greaterthan = a>b;
    bool lesserthan = a<b;
    bool greaterthanEqualsto = a>=b;
    bool lesserthanEqualsto = a<=b;

    cout<<"Relational Operator : "<<endl;
    cout<<"IsEqual : "<<boolalpha<<equalsto<<endl;
    cout<<"NotIsEqual : "<<boolalpha<<notequalsto<<endl;
    cout<<"GreaterThan : "<<boolalpha<<greaterthan<<endl;
    cout<<"GreaterThan : "<<boolalpha<<lesserthan<<endl;
    cout<<"GreaterThanEqulsTo : "<<boolalpha<<greaterthanEqualsto<<endl;
    cout<<"LesserThanEqulsTo : "<<boolalpha<<lesserthanEqualsto<<endl;

    //Logical Operator : 
    bool logicaland = (a>2)&&(b<20);
    bool logicalor = (a>20)||(b<0);
    bool logicalnot = (!a>2);

    cout<<"Logical Operator : "<<endl;
    cout<<"LogicalAnd : "<<boolalpha<<logicaland<<endl;
    cout<<"Logicalor : "<<boolalpha<<logicalor<<endl;
    cout<<"Logicalnot : "<<boolalpha<<logicalnot<<endl;

}