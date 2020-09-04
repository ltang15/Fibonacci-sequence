#include <iostream>
using namespace std;


int nextNum (int & a, int & b);
int main() {
    //Fibonacci number

    int n;
    cout << "Type in how many numbers you want for Fibonacci series" << endl;
    cin >> n;
    cout << "Fibonacci series is " <<endl;
    int a = 0, b = 1, c = 1;

    for (int i=1; i <=n; i++) {
        if ( i==1)
        {
            cout << 1 << " ";

        }
        else {
            c = nextNum(a, b);
            cout << c << " ";
        }
    }
    return 0;
}
int nextNum (int & a, int & b)
{
   int c = a + b;
    a = b;
    b = c;
   return c;
}


