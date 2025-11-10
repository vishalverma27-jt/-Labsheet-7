#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[200];
    cin.getline(s, 200);

    int words = 1;
    for(int i=0; i<strlen(s); i++)
        if(s[i] == ' ')
            words++;

    cout << "Total words = " << words;
    return 0;
}
