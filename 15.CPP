#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s1[200], s2[100];
    cin.getline(s1, 200);
    cin.getline(s2, 100);

    if(strstr(s1, s2))
        cout << "String found!";
    else
        cout << "String NOT found!";

    return 0;
}
