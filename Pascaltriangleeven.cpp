#include <iostream>
using namespace std;

class Pattern {
public:
    int k, l, n, i;
    void generation()
     {
        cout << "Enter number of rows: "; 
        cin >> n;
        cout << "Number of rows entered: " << n << endl;  
        for (i = n; i >= 1; i--) {
            for (k = n - i; k > 0; k--) {
                cout << " "; 
            }
            for (l = i; l > 0; l--) {
                cout << "* ";  
            }
            cout << endl;  
        }
    }
};

int main() {
    Pattern g;
    g.generation();
    return 0;
}
