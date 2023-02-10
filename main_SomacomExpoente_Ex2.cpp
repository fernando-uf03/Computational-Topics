#include <iostream>
#include <cstdlib>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float SomacomExpoente(float num,float den)
{
	float soma;
	num=2;
	den=50;
	soma=0.0;
	while (den>=1)
	{
		soma+=(num/den);
		num=num*2;
		den--;
	}
	return soma;
}

int main()
{
	int n;
	cout<<"Digite 1 para ver o resultado do somatorio da serie: ";
	cin>>n;
	if (n==1)
		cout<<"O valor do somatorio da serie eh igual a: "<<SomacomExpoente(2,50)<<endl;
	system("pause");
	return 0;
}
