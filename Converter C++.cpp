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
        std::cout << " USD = " << m_usd << " ���" << std::endl;
        std::cout << " EUR = " << m_eur << " ���" << std::endl;
        std::cout << " PLN = " << m_pln << " ���" << std::endl;
    }
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    while (int i = 1)
    {

        std::string  choice, ���;
        double inp, out;
       
        

        Price value {40.5, 39.35, 8.36};
        
        value.print();

        
 
        std::cout << "������ ������ ��� �����: " << std::endl;
        std::cin >> choice;

        std::cout << "������ ���� � �������: " << std::endl;
        std::cin >> inp;

        if (choice == "usd")
        {
            out = inp / value.m_usd;
            std::cout << std::fixed;
            std::cout << "�� ��������: " << std::setprecision(2) << out << " $" << std::endl;
        }
        else if (choice == "eur")
        {
            out = inp / value.m_eur;
            std::cout << std::fixed;
            std::cout << "�� ��������: " << std::setprecision(2) << out << " �" << std::endl;

        }
        else if (choice == "pln")
        {
            out = inp / value.m_pln;
            std::cout << std::fixed;
            std::cout << "�� ��������: " << std::setprecision(2) << out << " zl" << std::endl;

        }
        else
        {
            std::cout << "���������� ������ ( usd, pln, eur )!" << std::endl;
        }
        std::cout << "������ ���������?" << std::endl;
        std::cin >> ���;
        if (��� == "���")
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

