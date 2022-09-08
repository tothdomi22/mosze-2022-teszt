#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //nincs értelme dinamikus tömbnek, mert konstant értékkel dolgozunk + a konstans el van írva
    std::cout << '1-100 ertekek duplazasa' //nincs ; és "" közé kell rakni
    for (int i = 0;) //a for ciklus paramétere nem megfelelőek
    {
        b[i] = i * 2; //(i+1)-ra van szükség hogy ne 0tol 99ig számoljon
    }
    for (int i = 0; i; i++) //nem i-g kell menni hanem N_ELEMENTS-ig
    {
        std::cout << "Ertek:" //endl hozzáadva hogy szebb legyen
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; //double kell hogy legyen az átlag és kell neki kezdőértéket adni
    for (int i = 0; i < N_ELEMENTS, i++) //nem vesszővel hanem ; kell elválasztani
    {
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
