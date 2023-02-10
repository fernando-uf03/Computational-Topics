#include <iostream>
#include <cstdlib>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int x;
	int n;
	int exp;
	cout<<"Digite um valor inteiro para x: ";
	cin>>x;
	cout<<"Digite um valor inteiro nao negativo para n: ";
	cin>>n;
	for (exp=1;n>=1;n--)
		exp=exp*x;
	cout<<" Potencia de base x e expoente n"<<" = "<<exp<<endl;
	system("pause");
	return 0;
}


