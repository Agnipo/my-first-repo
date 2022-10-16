#include <iostream>
using namespace std;
int main()
{
    int ocena;
    cout<<"Ktory miesiac wybierasz ";
    cin>>ocena;

    switch(ocena)
    {
     case 1:
            cout<<"Styczen";
            break;
     case 2:
            cout<<"Luty";
            break;
     case 3:
            cout<<"Marzec";
            break;
     case 4:
            cout<<"Kwiecien";
            break;
     case 5:
            cout<<"Maj";
            break;
     default:
            cout<<"Podaj liczbe 1-5!";
            break;
    }
    system("PAUSE");
    return 0;

}

