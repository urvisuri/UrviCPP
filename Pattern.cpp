#include<iostream>
using namespace std;

class Pattern 
{
  public:
    int n, i, s, u, t;

    void getdata() {
        cout << "Enter number: ";
        cin >> n;

        for (i = 1; i <= n; i++) 
        {
            for (s = 1; s <= n - i; s++) 
            {
                cout << " ";
            }
            for (t = 1; t <= (2 * i - 1); t++) 
            {
                cout << "*";
            }
            cout << endl;
        }
    }
};

int main() {
    Pattern a;
    a.getdata();
    return 0;
}
