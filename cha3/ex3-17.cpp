#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string> vs;
    string word;
    while (cin >> word) {
        vs.push_back(word);
    }
    int i = 8;
    for (auto &s : vs) {
        for (auto &c : s) {
            c = toupper(c);
        }
        if (i == 8) {
            cout << endl;
            i = 0;
        }
        cout << s << " ";
        i++;
    }
    return 0;

    vector<int> iv1(10, 42);
    vector<int> iv1{42, 42, 42, 42, 42, 42, 42, 42, 42, 42};

}
