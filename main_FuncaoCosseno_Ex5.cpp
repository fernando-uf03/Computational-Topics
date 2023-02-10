#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float Fatorial (int den)
{
	int i=1;
	float fat=1;
	while (i<=den)
	{
		fat*=i;
		i++;
	}
	return fat;
}

float Cosseno (float angulo_digitado, float erro)
{
	float cosseno=0.0;
	float fracao=1.0;
	float angulo=1;
	int den=2;
	while ((sqrt(fracao*fracao))>=erro)
	{
		cosseno=cosseno+fracao;
		angulo*=((-1)*(angulo_digitado)*(angulo_digitado));
		fracao=((angulo)/Fatorial(den));
		den=den+2;
	}
	return cosseno;
}

int main()
{
	int n;
	int i;
	float ang;
	float erro;
	float cos;
	float sen;
	cout<<"Digite a quantidade de angulos que deseja saber o cosseno e o seno. :) Nao se esqueca de teclar enter ao final: ";
	cin>>n;
	cout<<"Agora, digite o erro que voce deseja para a sua aproximacao dos cossenos e dos senos(exemplo:0.001): ";
	cin>>erro;
	cout<<"Por fim, digite cada um dos angulos que deseja e tecle enter apos digitar cada um: ";
	cout<<"\nAngulo"<<setw(7)<<"Erro"<<setw(12)<<"Cosseno"<<setw(12)<<"Seno"<<endl;
	for(i=1;i<=n;i++)
	{
		cin>>ang;
		cos=Cosseno(ang,erro);
		sen=sqrt(1-(Cosseno(ang,erro)*Cosseno(ang,erro)));
		cout<<setw(13)<<erro<<setw(13)<<cos<<setw(13)<<sen<<endl;
	} 
	system("pause");
	return 0;
}
