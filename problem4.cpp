#include <iostream>
using namespace std;

void multp_table( int a){
    for (int i = 1; i <= 12; ++i) {
        cout << a << " * " << i << " = " << a * i << endl;
    }
}

int main()
{
    int a;
    cout << "Enter an integer: ";
    cin >> a;
    multp_table( a);

}

