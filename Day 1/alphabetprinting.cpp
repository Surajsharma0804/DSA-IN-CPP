#include<iostream>
using namespace std;
int main() {
    int c;
    cout<<"Enter c: ";
    cin>> c;
    int ch = 1;
    for(int i = 0; i<c; i++) {
        for(int j=0; j<c; j++) {
            cout << char (ch+96) << " ";
            ch++;
        }
        cout<<endl;
    }
    return 0;
}
