#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[200], sub[100];
    cin.getline(str, 200);
    cin.getline(sub, 100);

    char* p = strstr(str, sub);

    if(p) cout << "Substring found!";
    else  cout << "Not found";

    return 0;
}
