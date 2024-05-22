#include <iostream>
#include <vector>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251); // встановлення кодування Windows-1251 в  потік введення
    SetConsoleOutputCP(1251); // встановлення кодування Windows-1251 в  потік виведення
    vector<int> arr = { 3, -5, 7, -2, -8, 4, 1 };

    // Підрахунок середнього арифметичного від’ємних елементів
    int сума = 0;
    int кількість = 0;

    for (int число : arr) {
        if (число < 0) {
            сума += число;
            кількість++;
        }
    }

    double середнє = кількість != 0 ? static_cast<double>(сума) / кількість : 0.0;
    cout << "Середнє арифметичне від'ємних елементів: " << середнє << endl;

    // Сортування масиву за спаданням методом обміну (бульбашкове сортування)
    int n = arr.size();

    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] < arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    // Виведення відсортованого масиву
    cout << "Відсортований масив за спаданням: ";
    for (int число : arr) {
        cout << число << " ";
    }
    cout << endl;

    cout << "Автор: Туна Деніз Мехметович" << endl;
    return 0;
}
