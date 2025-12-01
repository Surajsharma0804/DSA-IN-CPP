#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout("data.txt", ios::app);
    string text;

    cout << "Enter text: ";
    getline(cin, text);

    fout << text << endl;
    fout << "This line is added automatically after your input." << endl;

    fout.close();
    
    ifstream fin("data.txt");
    string line;
    int count = 0;

    cout << "\nFile Content:\n";
    while (getline(fin, line)) {
        cout << line << endl;
        count += line.size();
    }

    fin.close();

    cout << "\nTotal characters: " << count;
    return 0;
}
