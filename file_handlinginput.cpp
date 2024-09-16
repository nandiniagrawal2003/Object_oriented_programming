// this code is used to retrieve a file in ram and store it in harddisk 
// this is used to giving data to file ie for input of the file
#include<bits/stdc++.h>
using namespace std;

int main(){
    char a[20];
ifstream fin;                           // bcz we want to retrieve in file
fin.open("demo.txt");
fin>>a;
cout<<a;
fin.close();
}