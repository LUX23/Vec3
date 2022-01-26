#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include "Vec3.h"
#include <cstdlib>
#include <windows.h>

using namespace psychoMath;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Vector v0;
    Vector v1(1, 2, 3);
    Vector v2(1, 2, 3, 9, 8, 7);

    std::cout << "Геттеры "
              << v2.getX() << " "
              << v2.getY() << " "
              << v2.getZ() << " "
              << std::endl;

    v2.setX(5);
    v2.setY(12);
    v2.setZ(13);

    std::cout << "Сеттеры "
              << v2.getX() << " "
              << v2.getY() << " "
              << v2.getZ() << " "
              << std::endl;

    v2 = v1.getCopy();
    std::cout << "Копирование "
              << v2.getX() << " "
              << v2.getY() << " "
              << v2.getZ() << " "
              << std::endl;


    std::cout << "Модуль вектора " << v2.abs() << std::endl;

    v2.scale(3.2);
    std::cout << "Умножение вектора на скаляр "
              << v2.getX() << " "
              << v2.getY() << " "
              << v2.getZ() << " "
              << std::endl;

    v2.normalize();
    std::cout << "Нормировка вектора "
              << v2.getX() << " "
              << v2.getY() << " "
              << v2.getZ() << " "
              << std::endl;

    add(v1, v2);
    subtract(v1, v2);
    vecMultiple(v1, v2);

    scalMultiple(v1, v2);
    getSin(v1, v2);
    getCos(v1, v2);
    getAng(v1, v2);

    system("PAUSE");
    return 0;
}