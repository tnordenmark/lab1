//---------------------------------------------------------------------------------------
// lab1_upg2.cpp
// Program med logiska fel och syntaxfel
// Thomas Nordenmark 2013-11-05
//---------------------------------------------------------------------------------------
// iostream krävs för cout och cin (syntax)
#include <iostream>
// Namespace std krävs för koden nedan (syntax)
using namespace std;

int main()
{
    //Variabler och konstanter
    int radie, omkrets, area;
    //const float PI = 3,14;
    // komma är inte giltigt, punkt krävs (syntax)
    const float PI = 3.14;

    //Inmatning av en cirkels radie
    cout << "Ange cirkelns radie: ";
    //cin = radie;
    // = är en felaktig operator på ett istream-objekt, >> är korrekt (syntax)
    cin >> radie;


    //Algoritm som beräknar omkrets (2*PI*r) och area (PI*r*r)
    // omkrets = PI * radie * radie;
    // formeln är för area, ej omkrets (logiskt)
    area = PI * radie * radie;
    //area = 2 * pi * radie;
    // "pi" är en ogiltig variabel eftersom det är "PI" som är deklarerad (syntax),
    // dessutom är formeln för omkretsen, ej area (logiskt)
    omkrets = 2 * PI * radie;

    //Utskrift av resultatet
    //cout << "En cirkel med radien " << radie << " har
    //         omkretsen "<< omkrets << " och arean " << area << endl;
    // Felaktig radbryting, mitt i en sträng. Radbrytning måste ske vid << eller >>
    // (syntax)
    cout << "En cirkel med radien " << radie << " har omkretsen "
         << omkrets << " och arean " << area << endl;
    
    // Kontrollera x
    int x;
    cout << "Ange x: ";
    // Lite ledtext är alltid trevligt för användaren ;-)
    cin >> x;

    //if(x = 100)
    // = är en tilldelningsoperator, jämförelse utförs med == (syntax)
    if(x == 100)
        cout << "x är lika med 100" << endl;
    
    //if(x > 0);
    // IF-satser avslutas inte med ; (syntax)
    if(x > 0)
        cout << "x är större än noll" << endl;
    
    switch(x)
    {
    // break krävs för att stoppa switchen från att "rinna över" till nästkommande
    // alternativ (syntax)
    case 5:
        cout << "x är 5" << endl;
        break;
    case 10:
        cout << "x är 10" << endl;
        break;
    default:
        cout << "x är varken 5 eller 10" << endl;
        break; // Egentligen är sista break överflödigt då det inte finns några fler
               // statements att köra men personligen brukar jag ha med det för
               // läsbarhetens skull
    }
    // slutklammer saknas (syntax)

              
    return 0;
} //End main
