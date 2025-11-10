#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char f[50], l[50];
    cout << "Enter first name: ";
    cin.getline(f, 50);
    cout << "Enter last name: ";
    cin.getline(l, 50);

    strcat(f, " ");
    strcat(f, l);

    cout << "Full name = " << f;
    return 0;
}
