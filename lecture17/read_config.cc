#include <sstream>
#include <iostream>
#include <fstream>
#include <string>

using std::string;
using std::cout;
using std::endl;

void process_line(const std::string &line);

void format_line(const std::string &line);

int main (int argc, char * argv[])
{
    using namespace std;
    if (argc != 2) {
        cerr << "Usage: " << argv[0] << " config_file" << endl;
        return 1;
    }
    ifstream fin(argv[1]);
    string line;
    while(getline(fin, line)) {
        process_line(line);
        format_line(line);
    }
}

void process_line (const std::string & line)
{
    using ISS = std::istringstream;
    ISS iss{line};
    string key;
    iss >> key;
    if (key == "dm_mass") {
        double mass;
        iss >> mass;
        cout << "The mass is " << mass << " GeV." << endl;
    } else if (key == "days") {
        double days;
        iss >> days;
        cout << "The run last for " << days << " days." << endl;
    }
}

void format_line (const std::string &line)
{
    using OSS = std::ostringstream;
    using ISS = std::istringstream;
    ISS iss{line};
    OSS oss;
    string word;
    iss >> word;
    oss << "key: " << word << "\nvalues:";
    while (iss >> word) {
        oss << "\t" << word;
    }
    cout << oss.str() << endl;
}
