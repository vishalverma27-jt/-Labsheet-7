#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[100];
    cin.getline(s, 100);
    strrev(s);
    cout << "Reversed = " << s;
    return 0;
}
