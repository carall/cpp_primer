#include <vector>
#include <iostream>

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
    if (!(*iter)) {
        //cout << *iter << endl;
        return;
    } else {
        cout << *iter << endl;
        print_vector(++iter);
    }
}
