#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include "Vec3.h"

namespace psychoMath
{
    Vector::Vector()
    {
        this->x = 0;
        this->y = 0;
        this->z = 0;
        this->id = psychoMath::id();
        std::cout << "\tКонструктор 1 для вектора #" << this->id << std::endl;
    }
}

psychoMath::Vector::Vector(double x, double y, double z)
{
    this->x = x;
    this->y = y;
    this->z = z;
    this->id = psychoMath::id();
    std::cout << "\tКонструктор 2 для вектора #" << this->id << std::endl;
}

psychoMath::Vector::Vector(double x, double y, double z, double x2, double y2, double z2)
{
    this->x = x2 - x;
    this->y = y2 - y;
    this->z = z2 - z;
    this->id = psychoMath::id();
    std::cout << "\tКонструктор 3 для вектора #" << this->id << std::endl;
}

double psychoMath::Vector::getX() const
{
    return this->x;
}

double psychoMath::Vector::getY() const
{
    return this->y;
}

double psychoMath::Vector::getZ() const
{
    return this->z;
}

void psychoMath::Vector::setX(double val)
{
    this->x = val;
}

void psychoMath::Vector::setY(double val)
{
    this->y = val;
}

void psychoMath::Vector::setZ(double val)
{
    this->z = val;
}

double psychoMath::Vector::abs() const
{
    return sqrt(this->x * this->x + this->y * this->y + this->z * this->z);
}

psychoMath::Vector psychoMath::Vector::getCopy() const
{
    return Vector(this->x, this->y, this->z);
}

void psychoMath::Vector::scale(double val)
{
    this->x *= val;
    this->y *= val;
    this->z *= val;
}

void psychoMath::Vector::normalize()
{
    double len = this->abs();
    if (len > 0)
        this->scale(1.0f / len);
}

psychoMath::Vector::~Vector()
{
    std::cout << "\tДеструктор для вектора #" << this->id << std::endl;
}

int psychoMath::id()
{
    static int i = 0;
    i++;
    return i;
}

psychoMath::Vector psychoMath::add(const Vector& a, const Vector& b)
{
    return psychoMath::Vector(a.getX() + b.getX(), a.getY() + b.getY(), a.getZ() + b.getZ());
}

psychoMath::Vector psychoMath::subtract(const Vector& a, const Vector& b)
{
    return psychoMath::Vector(a.getX() - b.getX(), a.getY() - b.getY(), a.getZ() - b.getZ());
}

psychoMath::Vector psychoMath::vecMultiple(const Vector& a, const Vector& b)
{
    return psychoMath::Vector(a.getY() * b.getZ() - a.getZ() * b.getY(), a.getZ() * b.getX() - a.getX() * b.getZ(), a.getX() * b.getY() - a.getY() * b.getX());
}

double psychoMath::scalMultiple(const Vector& a, const Vector& b)
{
    return a.getX() * b.getX() + a.getY() * b.getY() + a.getZ() * b.getZ();
}

double psychoMath::getSin(const Vector& a, const Vector& b)
{
    return vecMultiple(a, b).abs() / (a.abs() * b.abs());
}

double psychoMath::getCos(const Vector& a, const Vector& b)
{
    return scalMultiple(a, b) / (a.abs() * b.abs());
}

double psychoMath::getAng(const Vector& a, const Vector& b)
{
    return atan2(vecMultiple(a, b).abs(), scalMultiple(a, b)) * 180 / M_PI;
}
