// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

#include "TC.h";
#include "TC_nazemn.h";
#include "TC_vozduh.h";
#include "Camel_prost.h"
#include "Camel_skorostn.h"
#include "kentavr.h"
#include "boots.h"
#include "Carpet.h";
# include "Eagle.h";
#include "Broomstick.h";


int main()
{
    setlocale(LC_ALL, "Russian");
    TC* B[7];

    Camel_prost A1;
    B[0] = &A1;

    Camel_skorostn A2;
    B[1] = &A2;

    kentavr A3;
    B[2] = &A3;

    boots A4;
    B[3] = &A4;

    Carpet A5;
    B[4] = &A5;

    Eagle A6;
    B[5] = &A6;

    Broomstick A7;
    B[6] = &A7;

    int tip_gonki, num, kol_igrokov;
    double   rast_gonki;
    std::string stroka;

    std::string S[7];
    double D[7];
    bool rabota_snova ;

    do
    {

        while (true)
        {
            std::cout << "Добро пожаловать в гоночный симулятор!" << std::endl;
            std::cout << "1. Гонка для назеиного транспорта." << std::endl;
            std::cout << "2. Гонка для воздушного транспорта." << std::endl;
            std::cout << "3. Гонка для воздушного и наземного транспорта." << std::endl;
            std::cout << "Выберите тип гонки: ";
            std::cin >> stroka;
            try
            {
                tip_gonki = stoi(stroka);
                if ((tip_gonki == 1) || (tip_gonki == 2) || (tip_gonki == 3)) break;
                else std::cout << "Введённое число может быть только: 1 или 2 или 3: " << std::endl;
            }
            catch (...)
            {
                std::cout << "Не удалось преобразоватьв целое число. Попробуйте еще раз: ";

            }

        };



        while (true)
        {
            std::cout << "Укажите длину дистанции. Должно быть целым числом: ";
            std::cin >> stroka;
            try
            {
                rast_gonki = stod(stroka);
                if (rast_gonki <= 0) std::cout << "Дистанция должна быть положительнвм числом. Попробуйте еще раз: " << std::endl;
                else break;
            }
            catch (...)
            {
                std::cout << "Не удалось преобразовать введенное значение в число. Попробуйте еще раз" << std::endl;

            };

        };


        switch (tip_gonki)
        {
        case 1:
        {
            std::cout << "Гонка для назеиного транспорта." << std::endl;
            break;
        }
        case 2:
        {
            std::cout << " Гонка для воздушного транспорта." << std::endl;
            break;
        }
        case 3:
        {
            std::cout << "Гонка для воздушного и наземного транспорта." << std::endl;
            break;
        }
        };

        std::cout << "Длина дистанции равна: " << rast_gonki << std::endl;
        ;
        for (int i = 0; i < 7; i++)
        {
            std::cout << (i + 1) << ": " << B[i]->get_name() << " " << B[i]->get_nazvan_gonki() << std::endl;
        };
        std::cout << 0 << ": Закончить регистрацию" << std::endl;

        kol_igrokov = 0;

        while (true)
        {
            std::cout << "Введите число: ";
            std::cin >> stroka;

            try
            {
                num = stoi(stroka);
                if ((num == 0) && (kol_igrokov < 2))
                {
                    std::cout << "Количество игроков должно быть больше 2 " << std::endl;
                    continue;
                }
                if (num == 0)
                {
                    std::cout << "Регистрация закончена." << std::endl;
                    break;
                }
                if ((num > 7) || (num < 0))
                {
                    std::cout << "Число не входит в диапозон." << std::endl;
                    continue;
                }
                if ((tip_gonki == 1) && (num > 4))
                {
                    std::cout << "Для наземного транспорта число может быть только: 1 или 2 или 3 или 4. " << std::endl;
                    continue;
                }
                if ((tip_gonki == 2) && (num < 5))
                {
                    std::cout << "Для воздушного транспорта число может быть только: 5 или 6 или 7. " << std::endl;
                    continue;
                }
                if (B[num - 1]->get_ushastnik_gonki())
                {
                    std::cout << "Пользователь " << B[num - 1]->get_name() << " уже зарегистрирован." << std::endl;
                    continue;
                }
                else
                {
                    B[num - 1]->set_ushastnik_gonki(true);
                    kol_igrokov++;
                    std::cout << "Пользователь " << B[num - 1]->get_name() << " успешно зарегистрирован." << std::endl;
                    continue;
                }

            }
            catch (...)
            {
                std::cout << "Вы ввели не целое число." << std::endl;
            };

        }

        for (int i = 0; i < 7; i++)
        {

            if (B[i]->get_ushastnik_gonki())
            {
                S[num] = B[i]->get_name();
                D[num++] = B[i]->t_gonki(rast_gonki);
                B[i]->set_ushastnik_gonki(false);
            }

        }

        for (int i = 0; i < kol_igrokov - 1; i++)
        {
            for (int j = kol_igrokov - 1; j > i; j--)
            {
                if (D[j] < D[j - 1])
                {
                    num = D[j];
                    D[j] = D[j - 1];
                    D[j - 1] = num;
                    stroka = S[j];
                    S[j] = S[j - 1];
                    S[j - 1] = stroka;
                }


            }
        }
        for (int i = 0; i < kol_igrokov; i++)
        {
            std::cout << "Участник гонки " << S[i] << " преодолел расстояние " << rast_gonki << " за время: " << D[i] << std::endl;
        }
        while (true)
        {
            std::cout << "1. Провести еше одну гонку." << std::endl;
            std::cout << "2. Закончить работу программы. " << std::endl;
            std::cout << "Выберите действие.";
            std::cin >> stroka;
            try
            {
                num = stoi(stroka);
                if (num == 1)
                {
                    rabota_snova = true;
                    break;
                }
                if (num == 2)
                {
                    rabota_snova = false;
                    break;
                }
                std::cout << "Число должно быть или 1 или 2. Попробуйте снова." << std::endl;
            }
            catch (...)
            {
                std::cout << "Неверный ввод. Попробуйте снова." << std::endl;
            }
        }
    } while (rabota_snova);
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
