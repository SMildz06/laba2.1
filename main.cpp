// №2.1
#include <iostream>
using namespace std;


int main() {
	setlocale(LC_ALL, "Russian");
    //описание переменных и ввод
    double a, b, c, x1, x2;

    cout << "Введите  a: ";
    cin >> a;
    cout << "Введите  b: ";
    cin >> b;
    cout << "Введите  c: ";
    cin >> c;


    int d = b * b - 4 * a * c; // дискриминант
    if ((d) > 0)  // условия равенства дискриминанта
    {
        x1 = (-1 * b + sqrt(d)) / (2 * a);
        cout << "Первый корень: " << x1 << endl;
        x2 = (-1 * b - sqrt(d)) / (2 * a);
        cout << "Второй корень: " << x2 << endl;
    }
    else if (d == 0)
    {
        x1 = (-1 * b + sqrt(d)) / (2 * a);
        cout << "Единственный корень равен: " << x1 << endl;
    }
    else
    {
        cout << "Дискриминант меньше 0." << endl; // иначе корней нет
    }
    //вывод результатов(выше)

	return 0;
}