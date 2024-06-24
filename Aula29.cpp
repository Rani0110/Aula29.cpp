#include <iostream>
using namespace std;

int num;
int total1 = 0, total2 = 0, total3 = 0, total4 = 0;


int main()
{
    cout << "Digite um numero inteiro entre 0 e 40, se digitar um numero negativo o programa sera encerrado! \n";

    num = 1;
    

    while (num > 0)
    {
        cout << "Digite o numero: \n";
        cin >> num;

        if (num > 0 && num < 11)
        {
            total1++;
        }

        if (num >= 11 && num < 21)
        {
             total2++;
        }

        if (num >= 21 && num < 31)
        {
            total3++;
        }

        if (num >= 31 && num < 41)
        {
            total4++;
        }
    }


    cout << "O total do intervalo 00-10 e:" << total1 << "\n";
    cout << "O total do intervalo 11-20 e:" << total2 << "\n";
    cout << "O total do intervalo 21-30 e:" << total3 << "\n";
    cout << "O total do intervalo 31-40 e:" << total4 << "\n";

    return 0;
}