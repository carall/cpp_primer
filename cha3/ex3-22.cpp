#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string> text = {"first","graph"," ","end","","second","paragraph"};
    if (text.cbegin() == text.cend()) {
        cerr << "text is empty";
        return -1;
    }
    for (auto s = text.begin(); s != text.end() && !s->empty(); ++s) {
        for(auto &c : *s) {
            c = toupper(c);
        }
    }

    for (auto s : text) {
        cout << s << endl;
    }
}
