/* ######## IFSP - CAMPUS: CUBATÃO/SP #######
   # Curso: Técnico em Automação Industrial
   # Turma: CTA 271/ noturno
   # Docente: prof. Marco Aurélio
   # Disciplina: CBTPROG - Programação
   # Aluno: (matricula cb: 3042847) RAMON MATHEUS COSTA ALMEIDA
*/

/*
EXERCÍCIO 2: Entrar com dois valores via teclado, onde o segundo deverá ser maior que o primeiro. Caso
contrário solicitar novamente apenas o segundo valor.
*/

#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	//DECLARAÇÃO DE VARIÁVEIS
	double valor1 = 0, valor2 = 0;

	//RECEBENDO O 1° VALOR
	cout<<"Digite o primeiro valor -> ";
	cin>>valor1;
	
	do
	{
		// RECEBENDO O 2º VALOR
		cout<<"\nO segundo valor deve ser maior que o primiero. \nDigite o segundo valor -> ";
		cin>>valor2;
		
		//VERIFICANDO SE O 2° VALOR É MAIOR DO QUE O 1º VALOR.
		if(valor2<= valor1)
		{
			cout<<"\n >>>> Esse numero nao eh maior que o primeiro<<<<\n";
		}
	}
	while(valor1 >= valor2);
	
	return 0;
}