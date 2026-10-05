#include <iostream>
using namespace std;

int main() {
    int a, b, op;
    double result = 0;

    cout << "Введіть перше число\n";
    cin >> a;

    cout << "Введіть оператор\n1\t+\n2\t-\n3\t*\n4\t/\n\n";
    cin >> op;

    cout << "Введіть друге число\n";
    cin >> b;

    switch (op) {
        case 1: result = 0; break;
        case 2: result = 0; break;
        case 3: result = 0; break;
        case 4:
            if (b == 0) {
                cerr << "Ділення на нуль неможливе\n";
                return 1;
            }
            result = 0;
            break;
        default:
            cerr << "Невідомий оператор\n";
            return 1;
    }

    cout << "Результат = " << result << "\n";
    return 0;
}
