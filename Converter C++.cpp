#include <iostream>
#include <Windows.h> 
#include <stdio.h>
#include <iomanip>

class Price 
{
public:
    double m_usd;
    double m_eur;
    double m_pln;

    void print()
    {
        std::cout << " USD = " << m_usd << " грн" << std::endl;
        std::cout << " EUR = " << m_eur << " грн" << std::endl;
        std::cout << " PLN = " << m_pln << " грн" << std::endl;
    }
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    while (int i = 1)
    {

        std::string  choice, так;
        double inp, out;
       
        

        Price value {40.5, 39.35, 8.36};
        
        value.print();

        
 
        std::cout << "¬вед≥ть валюту дл€ обм≥ну: " << std::endl;
        std::cin >> choice;

        std::cout << "¬вед≥ть суму в гривн€х: " << std::endl;
        std::cin >> inp;

        if (choice == "usd")
        {
            out = inp / value.m_usd;
            std::cout << std::fixed;
            std::cout << "¬и отримаЇте: " << std::setprecision(2) << out << " $" << std::endl;
        }
        else if (choice == "eur")
        {
            out = inp / value.m_eur;
            std::cout << std::fixed;
            std::cout << "¬и отримаЇте: " << std::setprecision(2) << out << " И" << std::endl;

        }
        else if (choice == "pln")
        {
            out = inp / value.m_pln;
            std::cout << std::fixed;
            std::cout << "¬и отримаЇте: " << std::setprecision(2) << out << " zl" << std::endl;

        }
        else
        {
            std::cout << "ѕопробуйте ≥накше ( usd, pln, eur )!" << std::endl;
        }
        std::cout << "’очете повторити?" << std::endl;
        std::cin >> так;
        if (так == "так")
        {
             i = 1;
        }
        else
        {
             return 0;
        }

        std::cout << "\033[2J\033[1;1H";
    }
}

