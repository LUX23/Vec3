#pragma once

namespace psychoMath {
    class Vector
    {
    private:
        double x, y, z;
        int id;

    public:
        Vector(); // нулевой вектор
        Vector(double x, double y, double z); // вектор с координатами
        Vector(double x, double y, double z, double x2, double y2, double z2); // вектор с начальными и конечными точками

        // геттеры
        double getX() const;
        double getY() const;
        double getZ() const;

        // сеттеры
        void setX(double val);
        void setY(double val);
        void setZ(double val);

        double abs() const; // получить модуль вектора

        Vector getCopy() const; // копирование вектора

        void scale(double val); // умножение вектора на скаляр

        void normalize(); // нормировка вектора

        ~Vector(); // деструктор
    };

    int id(); // счётчик id

    Vector add(const Vector& a, const Vector& b); // сложение
    Vector subtract(const Vector& a, const Vector& b); // вычитание
    Vector vecMultiple(const Vector& a, const Vector& b); // векторное произведение

    double scalMultiple(const Vector& a, const Vector& b); // скалярное произведение векторов

    double getSin(const Vector& a, const Vector& b); // синус
    double getCos(const Vector& a, const Vector& b); // косинус
    double getAng(const Vector& a, const Vector& b); // угол
}