#include <src/matrix.h>
#include <iostream>

int main()
{
    math::Matrix m(3, 3); //Инициализация матрицы m
    m(0,0) = 1.;
    m(1,1) = 1.;

    math::Matrix m1(3, 3); //Инициализация матрицы m1
    m1(0,0)=5.;
    m1(1,1)=5.;

    std::cout << "Matrix m is:" << std::endl; //Вывод матрицы m
    m.print();

    std::cout << std::endl
              << "Matrix m1 is:" << std::endl; //Вывод матрицы m1
    m1.print();

    std::cout << std::endl //Суммирование m и m1
              << "Sum of matrices m and m1 is:" << std::endl; 
    math::Matrix m2 = m + m1;
    m2.print();

    std::cout << std::endl //Вычитание m и m1
              << "Subtract of matrices m and m1 is:" << std::endl; 
    math::Matrix m3 = m - m1;
    m3.print();

    std::cout << std::endl //Умножение m и m1
              << "Multiplication of matrices m and m1 is:" << std::endl;
    math::Matrix m4 = m * m1;
    m4.print();

    return 0;
}