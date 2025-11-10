#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main() {
    char a[100], b[100];
    cin.getline(a, 100);
    cin.getline(b, 100);

    if(strlen(a) != strlen(b)) {
        cout << "Not Anagrams";
        return 0;
    }

    sort(a, a + strlen(a));
    sort(b, b + strlen(b));

    if(strcmp(a, b) == 0)
        cout << "Strings are Anagrams";
    else
        cout << "Not Anagrams";

    return 0;
}
