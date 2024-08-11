
#include <iostream>
using namespace std;

class sname{
    public:
    string name;
    sname(string name){
        this->name = name;
    }

    friend void nameprint(const sname&obj){
        cout<<obj.name;
    }
};


int main(){
    sname s1("Piyush");
    nameprint(s1);
}