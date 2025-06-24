#include<iostream>
using namespace std;
int main() {
    int c;
    cout << "Enter c: ";
    cin >> c;
    // int ch = 1;
    for (int i = 1; i <= c; i++) {
        for (int j = 1; j<=i; j++) {
            cout<< char(j+64) << " ";
            // ch++;
        }
        cout<<endl;
    }
    return 0;
}