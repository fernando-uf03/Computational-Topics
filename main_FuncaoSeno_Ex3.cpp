#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float Seno(float A)
{
	float seno;
	seno=A-((A*A*A)/6)+((A*A*A*A*A)/120)-((A*A*A*A*A*A*A)/5040);
	return seno;
}

int main() 
{
	int i;
	int n;
	float a;
	cout<<"Digite a quantidade de angulos que voce deseja saber o seno e tecle enter: ";
		cin>>n;
	cout<<"Agora, digite os angulos em radianos com ate 4 casas decimais e tecle enter apos digitar cada um:";
	cout<<"\nAngulo        Seno"<<endl;
	for(i=1;i<=n;i++)
	{
		cin>>a;
		cout<<setw(20)<<Seno(a)<<endl;
	}
	system("pause");
	return 0;
}

