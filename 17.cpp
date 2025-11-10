#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[200], out[200];
    cin.getline(s, 200);

    int j = 0;
    for(int i=0; i<strlen(s); i++) {
        char ch = tolower(s[i]);
        if(ch!='a'&&ch!='e'&&ch!='i'&&ch!='o'&&ch!='u')
            out[j++] = s[i];
    }
    out[j] = '\0';

    cout << "String without vowels: " << out;
    return 0;
}
