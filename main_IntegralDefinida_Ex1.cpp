#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

double Integral (double n)
{	
	float inicial=0.0;
	float final=1.0;
	double h;
	double soma=0.0;
	double parcela;
	h=((final-inicial)/n);
	double x1=inicial;
	double x2=0.0;
	double Pi;
	while (x2<final)
	{
		x2=x1+h;
		parcela=(((1/(1+(x1*x1)))+(1/(1+(x2*x2))))/2);
		soma+=(parcela*h);
		x1=x2;
	}	
	Pi=4*soma;
	return Pi;
}

int main()
{
	double n;
	double area;
	double r;
	cout<<"Digite um valor para a aproximação de Pi no calculo da area. Dica:Digite um numero alto: ";
	cin>>n;
	cout<<"Digite um valor para o raio do circulo que voce deseja calcular a area: ";
	cin>>r;
	area=Integral(n)*r*r;
	cout<<"A area do circulo de raio "<<r<<" eh igual a: "<<area<<endl;
	system("pause");
	return 0;
}
