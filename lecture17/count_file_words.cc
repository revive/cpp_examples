#include <string>
#include <iostream>
#include <fstream>
#include <cctype>

using std::string;
using std::ifstream;
using std::cout;
using std::endl;
using std::cerr;
using std::getline;
using std::isspace;

int main (int argc, char * argv[])
{
    if (argc!=2) {
        cerr << "Usage: " << argv[0] << " input_file" << endl;
        return 1;
    }
    string line;
    unsigned int count{0};
    ifstream input_file{argv[1]};
    while (getline(input_file, line)) {
        bool space_before{true};
        for (auto c: line) {
            if (isspace(c)) {
                space_before = true;
            } else if (space_before) {
                count++;
                space_before = false;
            }
        }
    }
    cout << "There are " << count << " words in the file " << argv[1] << endl;
}
