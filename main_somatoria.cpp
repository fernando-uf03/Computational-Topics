#include <iostream>
#include <cstdlib>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int n;
	float soma;
	float num;
	float den;
	cout<<"Digite um numero inteiro positivo: ";
	cin>>n;
	num=n;
	den=1;
	soma=0.0;
	while(num>=1)
	{
		soma+=(num/den);
		den+=1;
		num--;
	}
	cout<<" O valor da soma eh igual a: "<<soma<<endl;
	system("pause");
	return 0;
}
