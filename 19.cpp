#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char finalStr[300] = "";
    char temp[100];
    int n;

    cout << "Enter number of strings: ";
    cin >> n;
    cin.ignore();

    for(int i=0; i<n; i++){
        cin.getline(temp, 100);
        strcat(finalStr, temp);
        strcat(finalStr, " ");
    }

    cout << "Final sentence: " << finalStr;
    return 0;
}
