#include <iostream>
#include <cstdlib>
#include <string.h>
#include <math.h>
using namespace std;
const int MAX=50;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Matriz
{
	public:
		char rotaciona_matriz()
		{
			char vetor_palavra[MAX];
			cin>>vetor_palavra;
			char matriz_rotacionada[strlen(vetor_palavra)][strlen(vetor_palavra)];
			int i, j; //declara os contadores da linha e da coluna
			for (i=0;i<strlen(vetor_palavra);i++)
			{
				for (j=0;j<strlen(vetor_palavra);j++)
				{
					if(i==0)
					{
						matriz_rotacionada[i][j]=vetor_palavra[j];
					}
					else
					{
						if(j<=i)
						{
							matriz_rotacionada[i][i-j]=vetor_palavra[strlen(vetor_palavra)-j];
						}
						if(i<=j)
						{
							matriz_rotacionada[i][j]=vetor_palavra[j-i];
						}	
					}
				}
			}
			int k, w; //declara mais contadores
			for (k=0;k<strlen(vetor_palavra);k++)
			{
				cout<<"[ ";
				for (w=0;w<strlen(vetor_palavra);w++)
				{
					cout<<matriz_rotacionada[k][w]<<" ";
				}
				cout<<"]";
				cout<<endl;
			}
			//Agora, vamos contar o numero de possibilidades de formacao da palavra original:
			int a, b; //declara mais contadores
			int c=0; //variavel que conta o numero de vezes que a palavra pode ser formada
			int t=-1;
			for (a=0;a<strlen(vetor_palavra);a++)//Nessa parte do codigo, eh preciso criar uma forma de uma variavel ser incrementada qnd satisfeitas as condicao
			{                               //da posicao do elemento a direita ou para cima da matriz corresponder a posicao da proxima letra da palavra digitada
				for (b=0;b<strlen(vetor_palavra);b++) 
				{
					if(matriz_rotacionada[a][b]==vetor_palavra[b])
					{
						t=t+1;
					}
				}
			}
			c=(t/(strlen(vetor_palavra)-1));
			cout<<"O numero de vezes que a palavra eh formada na matriz eh: "<<pow(2,(strlen(vetor_palavra)-1))<<endl;
		}
};

int main()
{
	cout<<"Digite a palavra que voce deseja colocar na matriz "<<endl;
	cout<<"A matriz formada pela rotacao da palavra sera mostrada apos voce escrever a palavra"<<endl;
	cout<<"Tecle enter apos digitar a palavra"<<endl;
	Matriz A; //cria objeto A
	cout<<A.rotaciona_matriz();  //imprime a matriz que rotaciona a palavra ao chamar a funcao rotaciona_matriz
	cout<<endl<<endl<<endl;
	system("pause");
	return 0;
}
