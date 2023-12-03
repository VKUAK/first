#include <iostream>
#include <algorithm>
#include <climits>

const int ROWS = 15;
const int COLS = 2;

// Функція для сортування рядка за зростанням
void sortRow(int arr[ROWS][COLS], int row) {
    std::sort(arr[row], arr[row] + COLS);
}

// Функція для знаходження номерів сусідніх рядків з мінімальною сумою елементів
void findMinSumRows(int arr[ROWS][COLS], int& row1, int& row2) {
    int minSum = INT_MAX;

    for (int i = 0; i < ROWS - 1; ++i) {
        int currentSum = arr[i][0] + arr[i][1] + arr[i + 1][0] + arr[i + 1][1];

        if (currentSum < minSum) {
            minSum = currentSum;
            row1 = i;
            row2 = i + 1;
        }
    }
}

int main() {
    int array[ROWS][COLS];

    // Введення елементів двовимірного масиву
    std::cout << "Введіть елементи двовимірного масиву розміром " << ROWS << "x" << COLS << ":\n";
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            std::cout << "Елемент [" << i + 1 << "][" << j + 1 << "]: ";
            std::cin >> array[i][j];
        }
    }

    // Знаходження номерів рядків з мінімальною сумою елементів
    int minSumRow1, minSumRow2;
    findMinSumRows(array, minSumRow1, minSumRow2);

    // Виведення результатів
    std::cout << "\nНомера рядків з мінімальною сумою елементів: " << minSumRow1 + 1 << " та " << minSumRow2 + 1 << "\n";

    // Сортування кожного рядка за зростанням
    sortRow(array, minSumRow1);
    sortRow(array, minSumRow2);

    // Виведення відсортованого масиву
    std::cout << "\nВідсортований масив:\n";
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            std::cout << array[i][j] << " ";
        }
        std::cout << "\n";
    }
