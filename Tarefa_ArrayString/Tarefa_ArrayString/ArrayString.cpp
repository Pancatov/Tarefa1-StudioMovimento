#include "ArrayString.h"

#include <iostream>
#include <cstdio>
using namespace std;

ArrayString::ArrayString()
{
	cout << "Por favor, informe o tamanho do Array desejado: ";
	cin >> tamanho;

	array = new string[tamanho];
	arrayTemp = nullptr;
	indice = 0;
	tamNovo = 5;

	for (int i = 0; i < tamanho; i++) {
		array[i] = "Null";
	}
}

void ArrayString::adiciona(string i)
{
	if (indice >= tamanho) realocar();
	array[indice] = i;
	indice++;
}

void ArrayString::remover()
{
	indice--;
	array[indice] = "Null";
}

string ArrayString::obterValorEm(int i)
{
	if (i < tamanho && i >= 0) {
		return array[i];
	}
	else {
		cout << "A posição selecionada é inexistente\n";
		return NULL;
	}
}

string ArrayString::obterValor()
{
	return array[indice - 1];
}

void ArrayString::mostrarValores()
{
	for (int i = 0; i < tamanho; i++) {
		cout << array[i] << endl;
	}
}

void ArrayString::desalocaArray()
{
	delete[] array;
}

int ArrayString::getQtdElementos()
{
	return indice;
}

int ArrayString::getTamanhoArray()
{
	return tamanho;
}

void ArrayString::realocar()
{

	arrayTemp = new string[tamanho];
	tamanho += tamNovo;
	for (int i = 0; i < tamanho - tamNovo; i++) {
		arrayTemp[i] = array[i];
	}

	array = new string[tamanho];

	for (int i = 0; i < tamanho - tamNovo; i++) {
		array[i] = arrayTemp[i];
	}

	for (int i = tamanho - tamNovo; i < tamanho; i++) {
		array[i] = "Null";
	}



	delete[] arrayTemp;
}
