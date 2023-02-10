#include <iostream>
#include <cstdlib>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Calculo
{	
	public:
		double RaizQuadrada(int n, double Y)
		{
			double X1;
			double num;
			double den;		//!!Duvida!! N sei se posso declarar as variaveis da func membro assim 
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
			return (XNmais1); //XNmais1 eh a raiz quadrada. Eu posso colocar return aqui???
		}
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
};

int main()
{
	int opcao;
	int num;
	double area;
	double volume;
	double lado1;
	double lado2;
	double lado3;
	double raio;
	cout<<"Voce deseja calcular a area de uma figura plana ou o volume de um solido? *Digite 1 para area e 0 para volume* ";
	cin>>opcao;
	if (opcao==1)
	{
		cout<<"Para calcular a area de um Quadrado ou um Retangulo, digite 1, de um circulo, digite 2, de um triangulo equilatero, digite 3: ";
		cin>>num;
		if (num==1)
		{
			cout<<"Digite os lados do quadrado ou do retangulo: ";
			cin>>lado1;
			cin>>lado2;
			cout<<"A area do quadrado ou retangulo que voce deseja eh: "<<lado1*lado2<<endl;
		}
		if (num==2)
		{
			cout<<"Digite o raio do circulo: ";
			Calculo pi;;
			cin>>raio;
			cout<<"A area do circulo eh: "<<pi.Integral(10000000)*raio*raio<<endl;
		}
		if (num==3)
		{
			cout<<"Digite o lado do triangulo equilatero: ";
			Calculo raiz;
			cin>>lado1;
			cout<<"A area do triangulo equilatero eh: "<<(lado1*lado1*raiz.RaizQuadrada(20,3))/4<<endl;
		}
	}
	if (opcao==0)
	{
		cout<<"Para calcular o volume de um paralelepipedo, digite 1, de uma esfera, digite 2: ";
		cin>>num;
		if (num==1)
		{
			cout<<"Digite os lados do paralelepipedo: ";
			cin>>lado1;
			cin>>lado2;
			cin>>lado3;
			cout<<"O volume do paralelepipedo que voce deseja eh: "<<lado1*lado2*lado3<<endl;
		}
		if (num==2)
		{
			cout<<"Digite o raio da esfera: ";
			Calculo pi;
			cin>>raio;
			cout<<"O volume da esfera eh: "<<(4*pi.Integral(10000000)*raio*raio*raio)/3<<endl;
		}
	}
	system("pause");
	return 0;
}
