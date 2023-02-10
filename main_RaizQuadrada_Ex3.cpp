#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

double RaizQuadrada (int n, double Y)
{
	double X1;
	double num;
	double den;
	double XN;
	double XNmais1=0.0;
	int i;
	X1=Y/2;
	XN=X1;
	for (i=1;i<=n;i++)
	{
		num=(XN*XN)+Y;
		den=2*XN;
		XNmais1=num/den;
		XN=XNmais1;
	}
	return (XNmais1); //XNmais1 eh a raiz quadrada
}

int main() 
{
	int n;
	double Y;
	cout<<"Primeiro, digite um numero para a aproximacao que deseja **precisa ser um numero inteiro** :  ";
	cin>>n;
	cout<<"Agora, digite o numero que deseja saber a raiz quadrada: ";
	cin>>Y;
	cout<<"A raiz quadrada do numero "<<Y<<" eh "<<RaizQuadrada(n,Y)<<endl;
	system("pause");
	return 0;
}
