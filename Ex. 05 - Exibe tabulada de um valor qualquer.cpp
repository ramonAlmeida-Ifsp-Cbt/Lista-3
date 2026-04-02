/* ######## IFSP - CAMPUS: CUBATÃO/SP #######
   # Curso: Técnico em Automação Industrial
   # Turma: CTA 271/ noturno
   # Docente: prof. Marco Aurélio
   # Disciplina: CBTPROG - Programação
   # Aluno: (matricula cb: 3042847) RAMON MATHEUS COSTA ALMEIDA
*/

/*
EXERCÍCIO 5: Entrar via teclado com um valor qualquer.
Travar a digitação, no sentido de aceitar somente
valores positivos. Após a digitação, exibir a tabuada do valor ...
...solicitado, no intervalo de um a dez.
*/

#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	
	//Declaração de variáveis
	double valor = 0;
	
	//Solicita ao usuário informar um valor positivo
	do
	{
		cout<<"Digite um valor POSITIVO (pode ser decimal) -> ";
		cin>>valor;
		
		if(valor<=0){
			
		cout<<"Esse numero nao eh positivo. Digite um valor POSITIVO.\n\n";
		}
	}
	while(valor <=0);
	
	
	cout<<"\n\n##### Exibindo a tabuada do numero "<<valor<<"#####\n\n";
	
	for(int contador =1; contador <=10; ++contador)
	{
		cout<<valor<<" x "<<contador<<" = "<<(contador * valor)<<endl;
	}	
	
	return 0;
}



