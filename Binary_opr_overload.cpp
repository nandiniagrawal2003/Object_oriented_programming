#include<bits/stdc++.h>
using namespace std;
class BinaryO{
    int x,y;
    public:
    void setData(int p,int q){
        x=p;
        y=q;
    }
    BinaryO operator +(BinaryO j1)     // b2 is binaryO class type so we will write that in the brackets
    {
    BinaryO g1;
    g1.x=j1.x+x;
    g1.y=j1.y+y;
    return g1;
    }
    void display(){
        cout<<x<<" "<<y;
    }

};
int main(){
    BinaryO b1,b2,b3;
    b1.setData(4,5);
    b2.setData(3,6);
    b3=b1+b2;
    b3.display();

}