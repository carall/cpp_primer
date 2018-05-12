#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using std::ifstream;
using std::string;
using std::vector;
using std::cout;
using std::endl;

void fstreamTest();

int main() {
  fstreamTest();
}

void fstreamTest() {
  cout << "fstreamTest function" << endl;
  string file_name{"file-ex84"};
  vector<string> vs;
  string s;
  ifstream input_file(file_name);
  if (input_file) {
    while (input_file >> s) {
      vs.push_back(s);
      cout << s << endl;
    }
  {
}
