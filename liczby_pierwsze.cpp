#include <iostream>
using namespace std;

bool czy_pierwsza(int n)
{
   if (n < 2) return false;

   for(int i = 2; i < n; i++)
   {
    if(n % i == 0) return false;
   }
   return true;

}

int main()
{
    int n = 0;
    cout<<"Podaj liczbe: ";
    cin>> n;

    if (czy_pierwsza(n) == true)
    {
        cout<<"jest pierwsza"<<endl;
    }
    else
    {
        cout<<"nie jest pierwsza"<<endl;
    }


    return 0;
}