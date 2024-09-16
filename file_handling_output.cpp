// this code is used to make a file in ram and store it in harddisk 
// this is used to giving data to file ie for output of the file
#include<bits/stdc++.h>
using namespace std;

int main(){
ofstream fout;                           // bcz we want to store in file
fout.open("demo.txt");
fout<<"Hello Nandini";
fout.close();
}