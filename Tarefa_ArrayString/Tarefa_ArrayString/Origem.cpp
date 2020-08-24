#include <iostream>
#include <cstdio>
#include "ArrayString.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "ptb");

	ArrayString array;

	array.adiciona("um");
	array.adiciona("dois");
	array.adiciona("tres");
	array.adiciona("quatro");
	array.adiciona("cinco");
	array.adiciona("seis");
	array.adiciona("sete");
	array.adiciona("oito");

	array.remover();

	cout << "Representação do array:\n";
	array.mostrarValores();

	cout << "|-------------------------------------------------|\n";

	array.adiciona("oito");
	array.adiciona("nine");
	array.adiciona("dez");
	array.adiciona("onze");

	array.remover();

	cout << "Representação do array:\n";
	array.mostrarValores();

	cout << "|-------------------------------------------------|\n";
	cout << "Representação do ultimo valor do array: " << array.obterValor() << endl;
	cout << "Representação do valor do array na posição 3: " << array.obterValorEm(3) << endl;
	cout << "Quantidade de elementos no array: " << array.getQtdElementos() << endl;
	cout << "Tamanho do array: " << array.getTamanhoArray() << endl;

	array.desalocaArray();
	array.~ArrayString();

	cout << "|-------------------------------------------------|\n";

	system("pause");
	return 0;
}