#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char a[100], b[100];
    cout << "Enter first string: ";
    cin.getline(a, 100);
    cout << "Enter second string: ";
    cin.getline(b, 100);

    int x = strcmp(a, b);

    if(x == 0) cout << "Both strings are equal";
    else if(x < 0) cout << "First string is smaller";
    else cout << "First string is greater";

    return 0;
}
