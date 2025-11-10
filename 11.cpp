#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[100], rev[100];
    cin.getline(s, 100);

    strcpy(rev, s);
    strrev(rev);

    if(strcmp(s, rev) == 0)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}
