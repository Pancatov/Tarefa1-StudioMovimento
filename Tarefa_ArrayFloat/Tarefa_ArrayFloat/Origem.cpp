#include <iostream>
#include <cstdio>
#include "ArrayFloat.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "ptb");

	ArrayFloat array;

	array.adiciona(1.1);
	array.adiciona(2.2);
	array.adiciona(3.3);
	array.adiciona(4.4);
	array.adiciona(5.5);
	array.adiciona(6.6);
	array.adiciona(7.7);
	array.adiciona(8.8);

	array.remover();

	cout << "Representa��o do array:\n";
	array.mostrarValores();

	cout << "|-------------------------------------------------|\n";

	array.adiciona(8.8);
	array.adiciona(9.9);
	array.adiciona(10.1);
	array.adiciona(11.1);

	array.remover();

	cout << "Representa��o do array:\n";
	array.mostrarValores();

	cout << "|-------------------------------------------------|\n";
	cout << "Representa��o do ultimo valor do array: " << array.obterValor() << endl;
	cout << "Representa��o do valor do array na posi��o 3: " << array.obterValorEm(3) << endl;
	cout << "Quantidade de elementos no array: " << array.getQtdElementos() << endl;
	cout << "Tamanho do array: " << array.getTamanhoArray() << endl;

	array.desalocaArray();
	array.~ArrayFloat();

	cout << "|-------------------------------------------------|\n";

	system("pause");
	return 0;
}