#include <iostream>
#include <math.h>

using namespace std;

int main() {

    int a, b, op;   double result;

    cout << "������ ����� �����\n";   cin >> a;

    cout << "������ �������� 1 = +, 2 = -, 3 = /, 4 = *, 5 = ^: ";  cin >> op;

    cout << "������ ����� �����\n";     cin >> b;

    switch (op) {

    case 1:     
        resut = a + b;
        break;

    case 2:
        result = a - b;
        break;

    case 3:     
        result = a / b;

        break;

    case 4:     // code
        result = a * b;
        break;
    case 5:
        result = pow(a, b);
        break;

    }

    cout << "��������� = " << result;

}