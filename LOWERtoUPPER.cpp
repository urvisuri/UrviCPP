#include<iostream>
using namespace std;

class array {
public:
    int i;
    string s;

    void upper() {
        cout << "Enter string you want to convert: ";
        cin >> s;
        for(i = 0; s[i] != '\0'; i++) {
            if(s[i] >= 'a' && s[i] <= 'z') {
                s[i] = s[i] - 32;  
            }
        }
        cout << "Result: " << s << endl;
    }
};

int main() {
    array a;
    a.upper();
    return 0;
}