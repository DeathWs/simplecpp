#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{

	double suma = 0, // suma 
	liczba; // zmienna, kolejne liczby z klawiatury
	unsigned int n; // podawana ilosc liczb

	cout<<"Z jakiej ilości liczb chcesz liczyć średnią arytmetyczną: ";
	cin>>n;
	
	cout<<endl;

	if(n>0) // tylko dodatnia
	{
		for(int i = 1;i<= n;i++)
		{
			cout<<"Podaj "<<i<<" liczbę: ";
			cin>>liczba;
			suma+=liczba; 
		}
		cout<<"Średnia "<<n<<" liczb wynosi: "<<suma/n<<endl;
	}
	else
		cout<<"Podałeś nieprawidłową wartość zmiennej n"<<endl;

	return 0;
}
