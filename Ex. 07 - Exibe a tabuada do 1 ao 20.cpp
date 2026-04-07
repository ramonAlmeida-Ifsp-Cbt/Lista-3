/* ######## IFSP - CAMPUS: CUBATÃO/SP #######
   # Curso: Técnico em Automação Industrial
   # Turma: CTA 271/ noturno
   # Docente: prof. Marco Aurélio
   # Disciplina: CBTPROG - Programação
   # Aluno: (matricula cb: 3042847) RAMON MATHEUS COSTA ALMEIDA
*/

/* ###### LISTA 3 #############################################
EXERCÍCIO 7: Exibir a tabuada dos valores de um a vinte, no intervalo de um a dez. Entre as tabuadas,
solicitar que o usuário pressione uma tecla.
*/

#include <iostream>
#include <conio.h> // para utilizar o comando _getch();

using namespace std;

int main(int argc, char** argv)
{
	int valor = 1; //intervalo Inicial
	int intervaloFinal = 20;

	cout<<"______TABUADA: DE 1 A 20 (intevalo: de 1 a 10)_______\n";
	
	do
	{
		//exibe a tabuada do valor entre 1 até 10
		// valor * n = resultado
		//[n: de 1 - 10]
		//[valor: de 1 - 20]
		
		for(int n = 1;n<11;n++)
		{
			cout<<"\n"<<valor<<" x "<<n<<" = "<<(valor * n);	
		}
		
		++valor;//vai se somar +1 até ficar igual ao intervalo Final
		
		//verifica se o valor já ultrapassou o limite/ intervalo final
		if(valor <= intervaloFinal)
		{
			cout<<"\nPressione uma tecla -> ";
			_getch();// lê uma tecla sem pressionar o Enter. Comando da biblioteca <conio.h>	
		}	
	}
	while(valor <= intervaloFinal);
	
	return 0;
}