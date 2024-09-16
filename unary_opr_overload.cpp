#include<bits/stdc++.h>
using namespace std;
class UnaryO{
    int x,y;
    public:
    void setData(int p,int q){
        x=p;
        y=q;
    }
    UnaryO operator -()     // b2 is binaryO class type so we will write that in the brackets
    {
    UnaryO g1;
    g1.x=-x;
    g1.y=-y;
    return g1;
    }
    void display(){
        cout<<x<<" "<<y;
    }

};
int main(){
    UnaryO b1,b2;
    b1.setData(4,5);
    b2= -b1;     // u2=u1.-()
    b2.display();

}