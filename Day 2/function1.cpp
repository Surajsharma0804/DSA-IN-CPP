#include<iostream>
using namespace std;
int sum() {
    int x , y,s;
    cout<< "Enter x : ";
    cin >> x;
    cout<<"Enter y : ";
    cin>> y;
    s = x + y;
    cout << s;   
}
int main() {
    sum();
    return 0;
}