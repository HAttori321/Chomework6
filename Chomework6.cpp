#include <iostream>
#include <windows.h>
#include <ctime>
using namespace std;
//Task1
//void PrintLine(char symbol, int length, int speed) {
//    for (int i = 0; i < length; i++) {
//        cout << symbol;
//        if (speed == 1) {
//            Sleep(100);
//        }
//        else if (speed == 2) {
//            Sleep(50);
//        }
//    }
//    cout << endl;
//}

int main()
{
    //Task1
    //int choice, length, speed;
    //char symbol;

    //while (true) {
    //    cout << "1. ������� ������������� ���" << endl;
    //    cout << "2. ������� ����������� ���" << endl;
    //    cout << "������ ����� ������ ����: ";
    //    cin >> choice;
    //    if (choice < 1 || choice > 3) {
    //        cout << "������� ����� ������ ����!" << endl;
    //        continue;
    //    }
    //    cout << "������ ������ ��� ��: ";
    //    cin >> symbol;
    //    cout << "������ ������� ��: ";
    //    cin >> length;
    //    cout << "1. ������" << endl;
    //    cout << "2. ���������" << endl;
    //    cout << "3. �������" << endl;
    //    cout << "������ ����� ������ ����: ";
    //    cin >> speed;
    //    if (speed < 1 || speed > 3) {
    //        cout << "������� ����� ������ ����!" << endl;
    //        continue;
    //    }
    //    if (choice == 1) {
    //        PrintLine(symbol, length, speed);
    //    }
    //    else if (choice == 2) {
    //        for (int i = 0; i < length; i++) {
    //            cout << symbol << endl;
    //            if (speed == 1) {
    //                Sleep(100); // �������� 100 ��
    //            }
    //            else if (speed == 2) {
    //                Sleep(50); // �������� 50 ��
    //            }
    //        }
    //    }
    //}

    //return 0;
    

    //Task2

    const int SIZE = 10;
    int numbers[SIZE];

    for (int i = 0; i < SIZE; ++i) 
    {
        numbers[i] = rand() % 100;
    }
        cout << "Numbers : ";
        for (int i = 0; i < SIZE; ++i) 
        {
            cout << numbers[i] << " ";
        }
        
        cout << endl;
    int min = numbers[0], max = numbers[0];
    srand(time(0));
    for (int i = 1; i < SIZE; ++i) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
        else if (numbers[i] > max) {
            max = numbers[i];
        }
    }

    cout << "\nMinimum element: " << min << endl;
    cout << "Maximum element: " << max << endl;
}