#include <iostream>
#include <cmath>

using namespace std;
int a,b;
int masa,wzrost;
float bmi;
int wiek1,wiek2;
int a1,b1,c1;
int rok;
string haslo="yes";
string haslo1;

int main()

{
    cout<<"podaj haslo"<<endl;
    cin>>haslo1;
  if(haslo1==haslo){
    cin>>a;
    cin>>b;
    system("cls");
    cout<<a+b<<endl;
    cout<<"-----------------------------------------------------------"<<endl;
    cout<<"podaj swoja mase"<<endl;
    cin>>masa;
    cout<<"podaj swoj wzrost"<<endl;
    cin>>wzrost;
    bmi=masa/(pow(wzrost,2));
    if(bmi<18,5){
        cout<<"jestes za chudy"<<endl;
    }else{
    cout<<"jestes za gruby"<<endl;
    }
    cout<<"-----------------------------------------------------------"<<endl;
    cout<<"podaj wiek osoby 1"<<endl;
    cin>>wiek1;
    cout<<"podaj wiek osoby 2"<<endl;
    cin>>wiek2;
    if(wiek1>wiek2){
        cout<<"starsza jest osoba pierwsza z wiekiem: "<<wiek1<<endl;

    }else if(wiek1<wiek2){
    cout<<"starsza jest osoba druga z wiekiem: "<<wiek2<<endl;
    }else{
    cout<<"osoby maja po tyle samo lat"<<endl;}
    cout<<"-----------------------------------------------------------"<<endl;
    cout<<"podaj pierwsza liczbe"<<endl;
    cin>>a1;
    cout<<"podaj druga liczbe"<<endl;
    cin>>b1;
    system("cls");
    cout<<"podaj jeden z operatorow arytmetycznych:"<<endl;

    cout<<"1-dodawanie"<<endl;
    cout<<"2-odejmowanie"<<endl;
    cout<<"3-mnozenie"<<endl;
    cout<<"4-dzielenie"<<endl;
     cin>>c1;
    switch(c1){
        case 1:{
        cout<<"wynik dodawania liczb "<<a1<<" i "<<b1<<" to: "<<a1+b1<<endl;
        break;
        }
        case 2:{
        cout<<"wynik odejmowania liczb "<<a1<<" i "<<b1<<" to: "<<a1-b1<<endl;
        break;
        }
        case 3:{
        cout<<"wynik mnozenia liczb "<<a1<<" i "<<b1<<" to: "<<a1*b1<<endl;
        break;
        }
        case 4:{
        cout<<"wynik dzielenia liczb "<<a1<<" i "<<b1<<" to: "<<a1/b1<<endl;
        break;
        }



    }
    cout<<"-----------------------------------------------------------"<<endl;
    cout<<"podaj rok"<<endl;
    cin>>rok;
    rok=rok%4;
    if(rok==0){
        cout<<"rok  jest przestepny"<<endl;
    }else{
     cout<<"rok nie jest przestepny"<<endl;
     }
 cout<<"-----------------------------------------------------------"<<endl;









    }else{
    cout<<"zle haslo";
    return 0;
    }
}
