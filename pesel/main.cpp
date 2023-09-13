#include <iostream>

using namespace std;

string pesel;
int chintconv(char a);
bool checkpesel(string psl);
int rok,msc,day;
string msc_sl[12] = {"styczen","luty","marzec","kwiecien","maj","czerwiec","lipiec","sierpien","wrzesien","pazdziernik","listopad","grudzien"};

int main()
{
    cout << "Podaj numer pesel: ";
    cin >> pesel;
    if (checkpesel(pesel)==true){
        cout << "Podany pesel jest poprawny." << endl;
        rok = chintconv(pesel[0])10+chintconv(pesel[1]);
        msc = chintconv(pesel[2])10+chintconv(pesel[3]);
        day = chintconv(pesel[4])10+chintconv(pesel[5]);
        if (msc<=12){
            rok=rok+1900;
        } else if (msc>20 && msc <=32){
            rok=rok + 2000;
            msc=msc-20;
        } else if (msc>40 && msc <=52){
            rok=rok + 2100;
            msc=msc-40;
        } else if (msc>60 && msc <=72){
            rok=rok + 2200;
            msc=msc-60;
        } else if (msc>80 && msc <=92){
            rok=rok + 1800;
            msc=msc-80;
        }
        if (chintconv(pesel[9])%2==1){
            cout << "Pesel nalezy do chlopczyka." << endl;
        } else {
            cout << "Pesel nalezy do dziewczynki." << endl;
        }
        cout << "Rok urodzenia to " << rok << endl;
        cout << "Miesiac urodzenia to " << msc_sl[msc-1] << endl;
        cout << "Dzien urodzenia to " << day << endl;


    } else {
        cout << "Podany pesel jest niepoprawny.";
    }
    return 0;
}

int chintconv(char a){
    return a - '0';
}

bool checkpesel(string psl){
    int wagi[10] = {1,3,7,9,1,3,7,9,1,3};
    int cyfra = 0, sw = 0;
    for (int i=0;i<10;i++){
        sw+=chintconv(psl[i])wagi[i];
    }
  if (sw%10==0){
        cyfra=0;
    } else {
        cyfra=10-(sw%10);
    }
    if (chintconv(psl[10])!=cyfra) return false;

    return true;
}
