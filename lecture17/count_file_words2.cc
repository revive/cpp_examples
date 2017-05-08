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
    string word;
    unsigned int count{0};
    ifstream input_file{argv[1]};
    while (input_file >> word) {
        count++;
    }
    cout << "There are " << count << " words in the file " << argv[1] << endl;
}
