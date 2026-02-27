#include <iostream>
using namespace std;

double mnozenie(double a, double b)
{
    double wynik = 0;
    wynik = a * b;
    return wynik;
}

double dzielenie(double a, double b)
{
    double wynik = 0;
    wynik = a / b;
    return wynik;
}

double dodawanie(double a, double b)
{
    double wynik = 0;
    wynik = a + b;
    return wynik;
}

double odejmowanie(double a, double b)
{
    double wynik = 0;
    wynik = a - b;
    return wynik;
}



int main()
{   
    double a = 0;
    double b = 0;
    int operacja = 0;

    cout<<"Podaj pierwsza liczbe: "<<endl;
    cin>>a;
    cout<<"Podaj druga liczbe: "<<endl;
    cin>>b;

    do
    {
        cout<<"Wybierz operacje: "<<endl<<"1: dodawanie"<<endl<<"2: odejmowanie"<<endl<<"3: mnozenie"<<endl<<"4: dzielenie"<<endl;
        cin>>operacja;
    } while (operacja>4 || operacja<1);
    
    if(operacja == 1)
    {
        cout<<"Wynik: "<<endl;
        cout<<dodawanie(a,b)<<endl;
    }

    if(operacja ==2)
    {
        cout<<"Wynik: "<<endl;
        cout<<odejmowanie(a,b)<<endl;
    }

    if(operacja == 3)
    {
        cout<<"Wynik: "<<endl;
        cout<<mnozenie(a,b)<<endl;
    }

    if(operacja == 4)
    {
        if(b == 0)
        {
            cout<<"Nie mozna dzielic przez 0"<<endl;
        }
        else
        {
            cout<<"Wynik: "<<endl;
            cout<<dzielenie(a,b)<<endl;
        }    
    }

    return 0;
}