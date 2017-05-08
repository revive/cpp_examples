#include <iostream>
#include <iterator>
#include <unistd.h>

using std::cin;
using std::cout;
using std::endl;
using std::flush;
using std::ends;
using std::unitbuf;
using std::nounitbuf;

int main ()
{
    cout << "hello with endl" << endl;
    sleep(3);
    cout << "hello with nothing";
    sleep(3);
    cout << endl;
    cout << "hello with flush" << flush;
    sleep(3);
    cout << endl;
    cout << "hello with ends" << ends;
    sleep(3);
    cout << endl;


    const char s[] = "abcdefg";
    cout << unitbuf;
    for (auto it = std::begin(s); it != std::end(s); ++it) {
        cout << *it;
        sleep(1);
    }
    cout << endl;
    cout << nounitbuf;
    for (auto it = std::begin(s); it != std::end(s); ++it) {
        cout << *it;
        sleep(1);
    }
    cout << endl;
}
