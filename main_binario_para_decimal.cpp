#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{ 
	int n;
	int convertido;
	int pot2;	
	cout<<"Digite um numero natural na base binaria: ";
	cin>>n;
	convertido=0;
	pot2=1;
	while (n!=0)
	{
		convertido+=((n%10)*pot2);
		pot2=pot2*2;
		n=n/10;
	}
	cout<<"O numero binario convertido para decimal eh: "<<convertido;
	system("pause");
	return 0;
}
