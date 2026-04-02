/* ######## IFSP - CAMPUS: CUBATÃO/SP #######
   # Curso: Técnico em Automação Industrial
   # Turma: CTA 271/ noturno
   # Docente: prof. Marco Aurélio
   # Disciplina: CBTPROG - Programação
   # Aluno: (matricula cb: 3042847) RAMON MATHEUS COSTA ALMEIDA
*/

/*
EXERCÍCIO 1: Criar uma rotina de entrada que aceite somente um valor positivo.
*/

#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	double valor = 0;
	
	do
	{
		cout<<"Digite um valor POSITIVO (pode ser decimal) -> ";
		cin>>valor;
		
		if(valor<=0){
			
		cout<<"Esse numero nao eh positivo. Digite um valor POSITIVO.\n\n";
		}
	}
	while(valor <=0);
	
	cout<<"\nNumero "<<valor<<" eh positivo.";
	return 0;
}