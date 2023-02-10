#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

double RegressaoLinearA (double n, double somax, double somay, double somaxy, double somaxquadrado)
{
	double num;
	double den;
	double a;
	num=(n*somaxy)-(somax*somay);
	den=(n*somaxquadrado)-(somax*somax);
	a=num/den;
	return a;
}

double RegressaoLinearB (double n, double somax, double somay, double somaxy, double somaxquadrado)
{
	double num;
	double den;
	double b;
	num=(somay*somaxquadrado)-(somax*somaxy);
	den=(n*somaxquadrado)-(somax*somax);
	b=num/den;
	return b;
}


int main() 
{
	double a;
	double b;
	double n;
	double x;
	double x1;
	double y;
	double y1;
	double somax=0.0;
	double somay=0.0;
	double somaxy=0.0;
	double somaxquadrado=0.0;
	int i;
	cout<<"Digite a quantidade de pontos que deseja: ";
	cin>>n;
	for (i=1;i<=n;i++)
	{
		cout<<"Digite x: ";
		cin>>x;
		cout<<"Digite y: ";
		cin>>y;
		somax=somax+x;
		somay=somay+y;
		somaxy=somaxy+(x*y);
		somaxquadrado+=(x*x);
	} 
	a=RegressaoLinearA(n, somax, somay, somaxy, somaxquadrado);
	b=RegressaoLinearB(n, somax, somay, somaxy, somaxquadrado);
	cout<<"Digite um novo valor para x que pertenca a reta: ";
	cin>>x1;
	y1=(a*x1)+b;
	cout<<"O coeficiente angular eh "<<a<<" e o coeficiente linear da reta eh "<<b<<endl;
	cout<<"O valor da ordenada do ponto eh "<<y1<<" e o valor da abscissa do ponto eh "<<x1<<endl;
	system ("pause");
	return 0;
}
