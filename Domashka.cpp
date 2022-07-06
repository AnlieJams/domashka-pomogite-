// Domashka.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main()

//Задание 1. Социальная лестница
{
    setlocale(0, "");

  
    int length, quantity, space = 0;
  
    cout << "Длина и количество ступенек: ";
   
    cin >> length >> quantity;


    for (int i = 0; i < quantity; i++)
    {
        for (int y = 0; y < length; y++)
        {
            cout << "А";
        }
        cout << "\n";
        space++;


        for (int j = 0; j < space; j++)
        {
            cout << "  ";
        }
    }
   
    
    //Задание 2. Длина социальной лестницы
    int stairs, spacechanger = 0;
   
    cout << "\nКоличество ступенек ";
    
    cin >> stairs;


    for (int i = 0; i < stairs; i++)
    {
        for (int y = 0; y < spacechanger; y++)
        {
            cout << " ";
        }
        cout << "ААА\n";
       
        spacechanger += 2;


        for (int y = 0; y < spacechanger; y++)
        {
            cout << " ";
        }
        cout << "А\n";
    }


    for (int y = 0; y < spacechanger; y++)
    {
        cout << " ";
    }
    cout << "ААА";

    //Задание 3. Вынеси уже ёлку, на улице июль.
    
    setlocale(0, "");

    int tiers, tierheight, number = 1, itemcount = 1, caras = 0, example = 2;;
   
    cout << "Просто введи два числа и всё (уровни и их высоту): ";
    
    cin >> tiers >> tierheight;
    
    int spacer = tierheight + (tiers * 2), reservespacer = spacer;


    for (int i = 0; i < tiers; i++)
    {
        for (int y = tierheight - 1; y >= 0; y--)
        {
            for (int j = 0; j < spacer; j++)
            {
                cout << "  ";
            }
            spacer--;

            for (int h = 0; h < itemcount; h++)
            {
                cout << "<>";
            }
          
            itemcount += 2;
          
            cout << "\n";
        }
        itemcount = 1 + example;
       
        example += 2;
       
        caras++;
       
        spacer = reservespacer - caras;
    }


    for (int y = 0; y < 4; y++)
    {
        for (int i = 0; i < (tierheight + (tiers * 2)) * 1.8; i++)
        {
            cout << " ";
        }
        cout << " <><><>\n";
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
