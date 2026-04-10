//bibliotecas
#include <iostream>


using namespace std;

// Função principal
int main(int argc, char** argv)
{
	
	//declaração de variáveis
	double maiorValor = 0;
	double somatoria = 0;
	double mediaAritmetica = 0;
		
	int contador = 0; // servirá como índice para o vetor

	double valores[10] {0,0,0,0,0,0,0,0,0,0}; //vetor que guardará os dez valores.
	//Zerando todos os espaços no vetor
	/*** matriz de 1 coluna e 10 espaços: do 0 ao 9:
	 * valores[0] = 0
	 * valores[1] = 0
	 * valores[2] = 0
	 * valores[3] = 0
	 * valores[4] = 0
	 * valores[5] = 0
	 * valores[6] = 0
	 * valores[7] = 0
	 * valores[8] = 0
	 * valores[9] = 0
	 ***/

	
	//  titulo
	cout<<"***** MAIOR NUMERO, SOMATORA E MEDIA ARITMETICA *****\n----> Forneca 10 valores <----\n";
	
	//  entrada de valores
	do
	{
		// a cada looping se requere ao usuário informar um valor
		cout<<"\nDigite o "<<(contador + 1)<<"º valor: ";
		cin>>valores[contador];
		
		//  verifica se o valor digitado é positivo
		// se não for positivo, o contador continua na mesma posição
		if(valores[contador] <= 0)
		{
			cout<<"\n\nDigite somente valores positivos.\n";
		}
		else
		{
			++contador; // vai para a próx. posição no vetor
		}
	}
	while(contador < 10); //será executado do 0 até chegar em 9 - último índice no vetor.
	
	contador = 0; //volta para o primeiro índice do vetor.

	cout<<"---- valores fornecidos -----";

	// exibe os valores fornecidos, faz a somatoria
	while(contador < 10)
	{
		//exibe a lista dos valores informados pelo usuário
		cout<<"\n"<<(contador + 1)<<"º valor: "<<valores[contador];
		
		//verifica o valor valor e o aloca na variável 'maioraAlor'
		if (maiorValor < valores[contador])
		{
			maiorValor = valores[contador];
		}

		// somando todos os valores
		somatoria = somatoria + valores[contador];
		
		++contador; // vai para a próx. posição no vetor
	}
		

	// calcula a média aritmética
	mediaAritmetica = somatoria/10;
	
	//Exibe os resultados
	cout<<"\n\nMaior valor: "<<maiorValor;
	cout<<"\nSomatoria: "<<somatoria;
	cout<<"\nMedia Aritmetica: "<<mediaAritmetica<<endl;
		
	return 0;
}