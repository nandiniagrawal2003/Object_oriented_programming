#include<bits/stdc++.h>
using namespace std;
class UnaryO{
    int x,y;
    public:
    void setData(int p,int q){
        x=p;
        y=q;
    }
    UnaryO operator ++(int)     // pass int as argument if u want to use post operator in int main fxn...otherwise if u keep that preopertor then u dont need to use this keyword
    {
    UnaryO g1;
    g1.x=x++;
    g1.y=y++;
    return g1;
    }
    void display(){
        cout<<x<<" "<<y;
    }

};
int main(){
    UnaryO b1,b2;
    b1.setData(4,5);
    b2= b1++;     // u2=u1.-()
    b2.display();

}