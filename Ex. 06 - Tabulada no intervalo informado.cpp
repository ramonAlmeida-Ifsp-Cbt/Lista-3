/* ######## IFSP - CAMPUS: CUBATÃO/SP #######
   # Curso: Técnico em Automação Industrial
   # Turma: CTA 271/ noturno
   # Docente: prof. Marco Aurélio
   # Disciplina: CBTPROG - Programação
   # Aluno: (matricula cb: 3042847) RAMON MATHEUS COSTA ALMEIDA
*/

/*
EXERCÍCIO 6: Entrar via teclado com um valor (X) qualquer. Travar a digitação, no sentido de aceitar
somente valores positivos. Solicitar o intervalo que o programa que deverá calcular a tabuada
do valor digitado, sendo que o segundo valor (B), deverá ser maior que o primeiro (A), caso
contrário, digitar novamente somente o segundo. Após a validação dos dados, exibir a
tabuada do valor digitado, no intervalo decrescente, ou seja, a tabuada de X no intervalo de B
para A.
*/

#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	double valor = 0;
	int intervaloInicial = 0, intervaloFinal = 0;
	
	cout<<"###### TABUADA DO VALOR DIGITADO (ORDEM DECRESCENTE) ######"<<endl;
	
	//---- Solicitando ao usuário informar o valor a ser exibido a tabuada ----//
	do
	{
		cout<<"Digite um valor POSITIVO (pode ser decimal) -> ";
		cin>>valor;
		
		if(valor<=0)
		{
			cout<<"Esse numero nao eh positivo. Digite um valor POSITIVO.\n\n";
		}
	}
	while(valor <=0);
	
	cout<<"\n----- Itervalo da tabuada -----\n<<< Digite somente numeros inteiros <<<\n\nInforme o intervalo inicial -> ";
	cin>>intervaloInicial;
	
	//---- Requerendo informar o intervalor final ----//
	do
	{
		cout<<"Informe o intervalo final (deve ser maior do que o inicial) -> ";
		cin>>intervaloFinal;
		
		//verificando se o valor final é maior do que o inicial.
		if(intervaloFinal <= intervaloInicial)
		{
			cout<<"\nEsse numero nao eh maior que o anterior.\n>>> Digite um valor maior que o intervalo inicial <<<.\n\n";
		}
	}
	while(intervaloFinal <= intervaloInicial);
	
	//Exibindo a tabuada
	cout<<"\n_______ TABUADA _______";
	for(int contador = intervaloFinal; contador >= intervaloInicial; --contador)
	{
		
		cout<<endl<<valor<<" x "<<contador<<" = "<< (valor * contador);
	}

	return 0;
}