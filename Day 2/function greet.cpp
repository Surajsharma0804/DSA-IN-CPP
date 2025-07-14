#include <iostream>
using namespace std;

string greet() {
    string name;
    cout << "Enter name: ";
    cin >> name;
    cout << "Hi gud morning " << name << endl;
    return name; 
}

int main() {
    greet(); 
    return 0;
}