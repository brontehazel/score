#include <iostream>
using namespace std;

int main() {
    int score;
    cin >> score;

    if (score < 0 || score > 100) {
        cout << "Помилка" << endl;
    } else if (score >= 0 && score <= 34) {
        cout << "Оцінка ECTS: F" << endl;
        cout << "Результат: Незадовільно" << endl;
    } else if (score >= 35 && score <= 59) {
        cout << "Оцінка ECTS: FX" << endl;
        cout << "Результат: Незадовільно, але можливе повторне складання" << endl;
    } else if (score >= 60 && score <= 68) {
        cout << "Оцінка ECTS: E" << endl;
        cout << "Результат: Достатньо" << endl;
    } else if (score >= 69 && score <= 74) {
        cout << "Оцінка ECTS: D" << endl;
        cout << "Результат: Задовільно" << endl;
    } else if (score >= 75 && score <= 81) {
        cout << "Оцінка ECTS: C" << endl;
        cout << "Результат: Добре" << endl;
    } else if (score >= 82 && score <= 89) {
        cout << "Оцінка ECTS: B" << endl;
        cout << "Результат: Дуже добре" << endl;
    } else if (score >= 90 && score <= 100) {
        cout << "Оцінка ECTS: A" << endl;
        cout << "Результат: Відмінно" << endl;
    }

    return 0;
}
