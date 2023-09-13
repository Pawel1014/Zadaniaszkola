
#include <iostream>
#include <math.h>
#include <cstdlib>


using namespace std;
bool pzero;
string bin;
char menu;
int liczba;
int liczby[10],wynik[10],wynik2,liczby2;
int main()
{

    do {
        cout << "1 - Konwersja bin to dec" << endl;
        cout << "2 - Konwersja dec to bin" << endl;
        cout << "3 - Zakoncz program" << endl;
        cin >> menu;
        switch (menu){
            case '1':
                {
                cout << "Podaj liczbe binarna: ";
                cin >> bin;
                int dl = bin.length();
                int pot = 0;
                int wynik_dec=0;
                for (int i=dl-1;i>=0;i--){
                    if (bin[i]=='1'){
                        wynik_dec += pow(2,pot);
                    }
                    pot++;
                }
                cout << "Przekonwertowana liczba dec to " << wynik_dec << endl;
                break;
            }
            case '2':
                {
                    cout << "Podaj liczbe dec: ";
                cin >> liczby2;

                liczby[0]=liczby2;
               for(int i=0;i<10;i++){
                wynik[i]=liczby2%2;
           liczby[i+1]=liczby2/2;
               }
cout<<"przekonwertowana liczba bin to:";
for (int  i=9;i>=0;i--){
if(wynik[i]==0){}
    else{
            pzero==true;
        cout<<wynik[i];
    }
}

                break;
                }
            case '3':
                cout << "Do widzenia ;)" << endl;
                break;
            default:
                cout << "Niepoprawny wybor !!" << endl;
                break;
    }
}

    while (menu!='3');
    return 0;
    }

