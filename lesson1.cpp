#include <iostream>
#include <iomanip>

int main()
{
    //ДЗ -- доделать программу, чтобы можно было задать размеры матрицы и она вместо i++ j++ соответственно увеличивала их на часть отрезка между Nmin и Nmax
    constexpr double Nmin = 5.1;
    constexpr double Nmax = 15;
    double int_len = std::to_string((int)(Nmax * Nmax)).length();
    for (auto i = Nmin; i < Nmax; ++i)
    {
        for (auto j = Nmin; j < Nmax; ++j)
        {
            std::cout << std::setw(int_len) << std::setfill('0') << std::setprecision(5) << i * j << " ";
        }
        std::cout << std::endl;
    }
}