#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float Pi(float den, float num)
{
	float pi;
	float fracao;
	num=1;
	den=1;
	pi=0;
	fracao=1;
	while ((sqrt(fracao*fracao))>=0.0001)
	{
		pi=pi+fracao;
		num=num*(-1);
		den=den+2;
		fracao=num/(den*den*den);
	}
	return pi;
}

int main() 
{
	float r;
	float area;
	cout<<"Digite o raio do circulo para que sua area seja calculada: ";
	cin>>r;
	area=Pi(1,1)*r*r;
	cout<<"A area do circulo eh igual a "<<area<<"u.a."<<endl;
	system("pause");
	return 0;
}
