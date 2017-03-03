#include <iostream>

using namespace std;


void myAbs(int a){
    if(a > 0){
        cout<<"Integer abs "<<a<<endl;
        return;
    }
    if(a <= 0){
        cout<<"Integer abs "<<-a<<endl;
        return;
    }

}

void myAbs(float a){
    if(a > 0){
        cout<<"Float abs "<<a<<endl;
        return;
    }
    if(a <= 0){
        cout<<"Float abs "<<-a<<endl;
        return;
    }
}

void myAbs(double a){

    if(a > 0){
        cout<<"Double abs "<<a<<endl;
        return ;
    }
    if(a <= 0){
        cout<<"Double abs "<<-a<<endl;
        return;
    }
}

int main() {
    int i;
    float f;
    double d;
    cin>>i;
    cin>>f;
    cin>>d;
    myAbs(i);
    myAbs(f);
    myAbs(d);
    return 0;
}