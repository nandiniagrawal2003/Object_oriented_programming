#include<bits/stdc++.h>
using namespace std;
class Exam{
    int x,y;
    public:
    ~Exam(){
        cout<< "Destructor";
    }
    Exam(int p,int q){
        x=p;
        y=q;
    }
    Exam(Exam &g1){              
        g1.x++;
        g1.y++;

    }
    void display(){
        cout<<x<< " "<<y;
    }

};

int main(){
    Exam e1(4,5);
    Exam e2(1,2);
    Exam e3(e1);
    // e1.display();
}