#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS];//*N_ELEMENTS
    std::cout << '1-100 ertekek duplazasa'//;
    for (int i = 0;)//for kiegeszitese
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)//for feltétel kiegészítése
    {
        std::cout << "Ertek:"//ki kellene írni az értéket is
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++)//;
    {
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
