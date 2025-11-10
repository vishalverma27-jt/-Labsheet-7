#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[100], ch;
    cin.getline(s, 100);
    cin >> ch;

    char* p = strchr(s, ch);

    if(p) cout << "Found at position: " << (p - s);
    else  cout << "Not found";

    return 0;
}
