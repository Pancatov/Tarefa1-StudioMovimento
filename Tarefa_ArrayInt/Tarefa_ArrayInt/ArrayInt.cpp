#include "ArrayInt.h"
#include <iostream>
#include <cstdio>

using namespace std;

ArrayInt::ArrayInt()
{
	cout << "Por favor, informe o tamanho do Array desejado: ";
	cin >> tamanho;

	array = new int[tamanho];
	arrayTemp = nullptr;
	indice = 0;
	tamNovo = 5;

	for (int i = 0; i < tamanho; i++) {
		array[i] = NULL;
	}
}

void ArrayInt::adiciona(int i)
{
	if (indice >= tamanho) realocar();
	array[indice] = i;
	indice++;
}

void ArrayInt::remover()
{
	indice--;
	array[indice] = NULL;
}

int ArrayInt::obterValorEm(int i)
{
	if (i < tamanho && i >= 0) {
		return array[i];
	}
	else {
		cout << "A posição selecionada é inexistente\n";
		return NULL;
	}
}

int ArrayInt::obterValor()
{
	return array[indice - 1];
}

void ArrayInt::mostrarValores()
{
	for (int i = 0; i < tamanho; i++) {
		cout << array[i] << endl;
	}
}

void ArrayInt::desalocaArray()
{
	delete[] array;
}

int ArrayInt::getQtdElementos()
{
	return indice;
}

int ArrayInt::getTamanhoArray()
{
	return tamanho;
}

void ArrayInt::realocar()
{

	arrayTemp = new int[tamanho];
	tamanho += tamNovo;
	for (int i = 0; i < tamanho - tamNovo; i++) {
		arrayTemp[i] = array[i];
	}

	array = new int[tamanho];

	for (int i = 0; i < tamanho - tamNovo; i++) {
		array[i] = arrayTemp[i];
	}

	for (int i = tamanho - tamNovo; i < tamanho; i++) {
		array[i] = NULL;
	}



	delete[] arrayTemp;
}
