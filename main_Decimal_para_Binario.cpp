#include <iostream>
#include <cstdlib>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int n;
	int convertido;
	int pot10;
	cout<<"Digite um numero natural: ";
	cin>>n;
	pot10=1;
	while (n!=0)
	{
		convertido+=((n%2)*pot10);
		pot10=pot10*10;
		n=n/2;
	}
	cout<<"O numero binario correspondente ao decimal digitado eh: "<<convertido<<endl;
	system("pause");
	return 0;
}
