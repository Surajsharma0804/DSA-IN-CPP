#include<iostream>
using namespace std;
string name(int n) {
    string name1, name2;
    cout << "Enter name1: ";
    cin>> name1;
    cout<<"Enter name2: ";
    cin>> name2;
    cout << name1 + name2;
}
int main(){
    name();
    return 0;
}