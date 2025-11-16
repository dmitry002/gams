#include <iostream>
#include <string>
#include <locale>
using namespace std;

const int N = 1;

struct Student {
    string prizvyshche;
    string imya;
    string grupa;
    int rik_narodzhennya;
};

int main() {
    setlocale(LC_CTYPE, "ukr");
    Student x[N];
    int zadaniy_rik = 1986;

    // Введення даних
    for (int i = 0; i < N; ++i) {
        cout << "Студент №" << i + 1 << "\n";
        cout << "Прізвище: ";
        cin >> x[i].prizvyshche;
        cout << "Ім'я: ";
        cin >> x[i].imya;
        cout << "Група: ";
        cin >> x[i].grupa;
        cout << "Рік народження: ";
        cin >> x[i].rik_narodzhennya;
        cout << "\n";
    }

    // Підміна на Коваленка
    x[0].prizvyshche = "Коваленко";
    x[0].imya = "Олександр";
    x[0].grupa = "КН-21";
    x[0].rik_narodzhennya = 1986;

    cout << "\n--- Виведення через індекс масиву ---\n";
    cout << "Студенти, народжені у " << zadaniy_rik << " році:\n\n";

    bool found = false;
    for (int i = 0; i < N; ++i) {
        if (x[i].rik_narodzhennya == zadaniy_rik) {
            cout << "Прізвище: " << x[i].prizvyshche
                << "\nІм'я: " << x[i].imya
                << "\nГрупа: " << x[i].grupa
                << "\nРік народження: " << x[i].rik_narodzhennya << "\n\n";
            found = true;
        }
    }

    if (!found) {
        cout << "Студентів, народжених у " << zadaniy_rik << " році, не знайдено.\n";
    }

    cout << "\n--- Виведення через вказівник ---\n";
    cout << "Студенти, народжені у " << zadaniy_rik << " році:\n\n";

    Student* p = x;
    found = false;
    for (int i = 0; i < N; ++i, ++p) {
        if (p->rik_narodzhennya == zadaniy_rik) {
            cout << "Прізвище: " << p->prizvyshche
                << "\nІм'я: " << p->imya
                << "\nГрупа: " << p->grupa
                << "\nРік народження: " << p->rik_narodzhennya << "\n\n";
            found = true;
        }
    }

    if (!found) {
        cout << "Студентів, народжених у " << zadaniy_rik << " році, не знайдено.\n";
    }

    return 0;
}