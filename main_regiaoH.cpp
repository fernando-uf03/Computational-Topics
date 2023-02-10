#include <iostream>
#include <cstdlib>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int n;
	float x;
	float y;
	cout<<"Digite o numero de pontos a serem analisados: ";
	cin>>n;
	while (n>0)
	{
		cout<<"Digite a coordenada x: ";
		cin>>x;
		cout<<"Digite a coordenada y: ";
		cin>>y;
		if (x>=0&&y>=0&&((x*x)+(y*y))<=1)
		cout<<"O ponto pertence a regiao H"<<endl;
		else
		cout<<"O ponto nao pertence a regiao H"<<endl;
		n=n-1;
	}
	system("pause");
	return 0;
}
