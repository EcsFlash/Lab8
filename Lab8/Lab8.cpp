﻿// Lab8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
const int MATRIX_N = 12;
float floatGenerator() {
    if (rand() % 3 == 1) {
        return -rand() / 100.;
    }
    else {
        return rand() / 100.;
    }
}
int main()
{
    srand(time(nullptr));
    float matri[MATRIX_N][MATRIX_N];
    for (int i = 0; i < MATRIX_N; i++) {
        for (int j = 0; j < MATRIX_N; j++) {
            //cin >> matrix[i][j];
            matri[i][j] = floatGenerator();
            if (j == MATRIX_N-1) {
                cout << matri[i][j] << "\n";
            }
            else {
                cout << matri[i][j] << "\t";
            }
            if (i <= j) {
                matri[i][j] = 0;
            }
        }
    }
    cout << "" << endl;
    for (int i = 0; i < MATRIX_N; i++) {
        for (int j = 0; j < MATRIX_N; j++) {
            if (j == MATRIX_N-1) {
                cout << matri[i][j] << "\n";
            }
            else {
                cout << matri[i][j] << "\t";
            }
            
        }
    }
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
