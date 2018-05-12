#include <vector>
#include <iostream>
#include <cassert>

// #define NDEBUG
using std::vector;
using std::cout;
using std::endl;

void print_vector(vector<int>::iterator &);

int main() {
    vector<int> vi = {1,2,3};
    auto beg = vi.begin();
    print_vector(beg);
}

void print_vector(vector<int>::iterator & iter) {
    #ifndef NDEBUG
    cout << *iter << endl;
    #endif
    if (!(*iter)) {
        //cout << *iter << endl;
        return;
    } else {
        cout << *iter << endl;
        print_vector(++iter);
    }
}
