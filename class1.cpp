#include<bits/stdc++.h>
using namespace std;
class Car{
    public:    // it will make down all publicly accessible
    int tyre;
    int brake;
    public :     // it will make only both functions accessible.
    void fitTyre(){
        cout<<tyre<<endl;
        cout << "Tyre fit successfully"<<endl;
    }
    void setBrake(){
        cout<<brake<<endl;
        cout << "Brake set successfully"<<endl;
    }
};
int main(){
    Car c1,c2;
    c1.tyre=55;
    c2.tyre = 5;
    c1.brake=9;
    c2.brake=8;
    c1.fitTyre();
    c1.setBrake();
    c2.fitTyre();
    c2.setBrake();
    return 0;
}