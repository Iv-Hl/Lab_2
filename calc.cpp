#include <iostream>
#include <math.h>

using namespace std;

int main() {

    int a, b, op;   double result;

    cout << "¬вед≥ть перше число\n";   cin >> a;

    cout << "¬вед≥ть оператор 1 = +, 2 = -, 3 = /, 4 = *, 5 = ^: ";  cin >> op;

    cout << "¬вед≥ть друге число\n";     cin >> b;

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

    cout << "–езультат = " << result;

}