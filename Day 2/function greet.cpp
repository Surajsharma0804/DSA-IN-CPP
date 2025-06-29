#include <iostream>
using namespace std;

string greet() {
    string name;
    cout << "Enter name: ";
    cin >> name;  // Corrected input syntax
    cout << "Hi gud morning " << name << endl;
    return name; // You declared the return type as string, so return name
}

int main() {
    greet();  // You can store the returned name if needed
    return 0;
}