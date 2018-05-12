#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::istream;
using std::string;

istream& ioTest(istream&);

int main(){
    ioTest(cin);
}

istream& ioTest(istream& is){
    string s;
    while (!is.eof()) {
        is >> s;
        cout << s << endl;
    }
    is.clear();
    return is;
}
