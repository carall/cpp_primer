#include <iostream>
#include <string>

using std::cout;
using std::string;
using std::endl;

bool is_subrange(const string& s1, const string& s2);

int main() {
    string s1 = "hello";
    string s2 = "helloworld";
    cout << is_subrange("hello", "helloworld") << endl;
    cout << is_subrange(s1, s2) << endl;
    cout << "hello,world!" << endl;
}

bool is_subrange(const string & s1, const string & s2) {
    if (s1.size() == s2.size()) {
        return s1 == s2;
    }
    auto size = s1.size() < s2.size() ? s1.size() : s2.size();
    for (decltype(size) i = 0; i < size; ++i) {
        if (s1[i] != s2[i]) {
            return false;
        }
    }
    //return true;
}
