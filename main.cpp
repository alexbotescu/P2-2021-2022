#include "libraries/pair.h"
#include <string>
#include <utility>
int main() {
    Pair<int, int> * p = new Pair<int, int>(2, 3);
    cout << *p << endl;
    Pair<string, int> p1("anamaria", 2);
    cout << p1 << endl;
    pair<string, string> pr("anamaria", "ion");
    cout << pr.first << ' ' << pr.second;
    return 0;
}
