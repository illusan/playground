#include <iostream>
#include <vector>
using namespace std;


int main()
{
    int n = 0;
    vector<int> dzielniki;

    cout<<"Podaj liczbe: "<<endl;
    cin>>n;

    for(int i = 0; i < n; i++)
    {
        if(n % i == 0)
        {
            dzielniki.push_back(i);
        }
    }

    cout<<"Wszystkie dzielniki liczby "<<n<<": "<<endl;

    for(int i = 0; i < dzielniki.size(); i++)
    {
        cout<<dzielniki[i]<<" ";
    }

    return 0;    
}