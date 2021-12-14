#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    double y;
    double x;
    cout << "Введите X: ";
    cin >> x;
    //Скорочена форма
    if (x <= -1)
        y = x + log(abs(cos(5 * x))) + exp((1 / x) + x);
    else if (x > -1 && x < -0.4)
        y = x + sqrt(pow(2 - x, 3)) - tan(x);
    else if (x >= 0.4)
        y = x + sin(5 * x) - sqrt(abs(1 - x));
    cout << "1) " << y << endl;
    y = 0;
    //Повна форма
    if (x <= -1)
        y = x + log(abs(cos(5 * x))) + exp((1 / x) + x);
    else
        if (x > -1)
            if (x < -0.4)
                y = x + sqrt(pow(2 - x, 3)) - tan(x);
            else
                y = x + sin(5 * x) - sqrt(abs(1 - x));
    cout << "2) " << y;
    return 0;
}
