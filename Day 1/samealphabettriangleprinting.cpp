#include<iostream>
using namespace std;
int main() {
    int c;
    cout<< "Enter c: ";
    cin>> c;
    for (int i =1; i <=c; i++) {
        for (int j = 1; j<=i; j++) {
            cout<< char(i+64) << " ";
        }
        cout << endl;
    }
    return 0;
}