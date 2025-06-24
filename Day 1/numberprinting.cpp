#include<iostream>
using namespace std;
int main() {
    int n;
    cout<< "Enter n: ";
    cin >> n;
    int NUM =1;
    for (int i = 0; i<n; i++) {
        for(int j = 0; j<n; j++) {
            cout << NUM<< " ";
            NUM++;
        }
        cout<<endl;
    }
    return 0;
}