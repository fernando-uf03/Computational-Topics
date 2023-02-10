#include <iostream>
#include <cstdlib>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float SomaSerie(float num, float den)
{
	float soma;
	num=1;
	den=1;
	soma=0.0;
	while (den<=50)
	{
		soma+=(num/den);
		num=num+2;
		den++;
	}
	return soma;
}

int main() 
{	
	int n;
	cout<<"Tecle 1 para saber o resultado da serie S"<<endl;
	cin>>n;
	if (n==1)
		cout<<"O valor do somatorio da serie eh: "<<SomaSerie(0,0)<<endl;
	system("pause");
	return 0;
}

