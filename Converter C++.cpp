#include <iostream>
#include <Windows.h> 
#include <stdio.h>
#include <iomanip>

class Price 
{
private:
    double usd, eur, pln;
public:
    void setPrice(double pt_usd, double pt_eur, double pt_pln)
    {
        usd = pt_usd;
        eur = pt_eur;
        pln = pt_pln;
    }
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    
    int i;

    
    while (1)
    {

        std::string  choice, ���;
        double inp, out;
       
        int i;

        Price pt;

        std::cout << " USD = " << usd << " ���" << std::endl;
        std::cout << " EUR = " << eur << " ���" << std::endl;
        std::cout << " PLN = " << pln << " ���" << std::endl;

        std::cout << "������ ������ ��� �����: " << std::endl;
        std::cin >> choice;

        std::cout << "������ ���� � �������: " << std::endl;
        std::cin >> inp;

        if (choice == "usd")
        {
            out = inp / usd;
            std::cout << std::fixed;
            std::cout << "�� ��������: " << std::setprecision(2) << out << " $" << std::endl;
        }
        else if (choice == "eur")
        {
            out = inp / eur;
            std::cout << std::fixed;
            std::cout << "�� ��������: " << std::setprecision(2) << out << " �" << std::endl;

        }
        else if (choice == "pln")
        {
            out = inp / pln;
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
            i = 0;

        std::cout << "\033[2J\033[1;1H";
    }
}

