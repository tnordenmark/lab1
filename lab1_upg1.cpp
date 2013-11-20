//---------------------------------------------------------------------------------------
// lab1_upg1.cpp
// Program för att beräkna bensinförbrukning
// Thomas Nordenmark 2013-11-05
//---------------------------------------------------------------------------------------
#include <iostream> // cout och cin
#include <iomanip> // setw och setprecision
using namespace std; // för att slippa std::-prefixet

int main()
{
    // Konstant för bensinpriset (från bensinpriser.nu)
    const double bensinpris = 14.03;

    // Variabler för mätarställning och tankad volym
    int matare_forra = 0;
    int matare_ny = 0;
    double vol_tankat = 0.0;

    // Programmets "UI"    
    cout << "BESINFÖRBRUKNING OCH KOSTNAD" << endl;
    cout << "============================" << endl << endl;
    
    // Ledtexter och datainmatning
    cout << "Ange mätarställning 1 [km]: ";
    cin >> matare_forra;

    cout << "Ange mätarställning 2 [km]: ";
    cin >> matare_ny;
    
    cout << "Hur mycket tankade du [l] : ";
    cin >> vol_tankat;

    // Variabler för beräkningar av förbrukning och kostnad
    double antal_mil = (matare_ny - matare_forra) / 10;
    double forbrukning = vol_tankat / antal_mil;
    double milkostnad = bensinpris * forbrukning;

    // Beräkningar av utdata, setw & left för justering av textströmmen samt setprecision
    // för att begränsa resultatet till 2 decimaler. Inte helt säker på att det var denna
    // metod som åsyftades eftersom det går att göra en "fuling" med t.ex. printf
    // istället
    cout << endl << endl;
    cout << setw(30) << left << "Bensinförbrukning  [l/mil]: " << setprecision(3)
         << forbrukning << endl;
    cout << setw(28) << left << "Milkostnad        [kr/mil]: " << setprecision(4)
         << milkostnad << endl;

    return 0;
}
/* vim:set ft=cpp tw=90 sts=4 sw=4 cindent: */
