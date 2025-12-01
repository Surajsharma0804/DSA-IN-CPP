//printing a rectangle using '*'.

#include<iostream>
using namespace std;
int main() {
    // int n, m;
    // cout << "Enter n: ";
    // cin >> n;
    // cout << "Enter m: ";
    // cin >> m;
    // for(int i = 1; i <= n; i++){
    //     for(int j = 1; j <=m; j++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

//square printing.
    // int n;
    // cout << "Enter n: ";
    // cin>> n;
    // for(int i = 1; i <= n; i++){
    //     for(int j = 1; j<= n; j++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }4


    //triangle printing
    int n;
    cout << "Enter n: ";
    cin>> n;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <=i; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}


