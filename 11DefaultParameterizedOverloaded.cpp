// #include <iostream>
// using namespace std;
// class box{
//     private:
//     int length,width,height;

//     public:
//     //Default Constructor
//     box(){
//         cout<<"Default Constructor is called."<<endl;
//     }

//     //Parameterized constructor :
//     box(int l, int w, int h):length(l),width(w),height(h){
//         cout<<"Parameterized constructor called"<<endl;
//     }

//     void show(){
//         cout<<"Dimensions of box : "<<length<<" "<<width<<" "<<height<<" "<<endl;
//     }

// };

// int main(){
//     box box1;
//     box box2(10,20,30);
//     box2.show();
// }


//----------ex02 with different name---------- : 
#include <iostream>
using namespace std;

class rectangle{
    private:
    int length,width,height;

    public : 
    rectangle(){
        cout<<"Default constructor is called"<<endl;
    }
    rectangle(int l, int w, int h):length(l),width(w),height(h){
        cout<<"Parameterized constructor called"<<endl;
    }
    
    int show(){
        cout<<"Dimensions : "<<endl;
        cout<<"length : "<<length<<endl;
        cout<<"width : "<<width<<endl;
        cout<<"height : "<<height<<endl;
    }
};

int main(){
    rectangle rect;
    rectangle rect2(20,50,60);
    rect2.show();

}