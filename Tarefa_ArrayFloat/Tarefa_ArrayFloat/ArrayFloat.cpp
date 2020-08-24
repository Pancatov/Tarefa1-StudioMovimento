#include "ArrayFloat.h"

#include <iostream>
#include <cstdio>
using namespace std;

ArrayFloat::ArrayFloat()
{
	cout << "Por favor, informe o tamanho do Array desejado: ";
	cin >> tamanho;

	array = new float[tamanho];
	arrayTemp = nullptr;
	indice = 0;
	tamNovo = 5;

	for (int i = 0; i < tamanho; i++) {
		array[i] = NULL;
	}
}

void ArrayFloat::adiciona(float i)
{
	if (indice >= tamanho) realocar();
	array[indice] = i;
	indice++;
}

void ArrayFloat::remover()
{
	indice--;
	array[indice] = NULL;
}

float ArrayFloat::obterValorEm(int i)
{
	if (i < tamanho && i >= 0) {
		return array[i];
	}
	else {
		cout << "A posição selecionada é inexistente\n";
		return NULL;
	}
}

float ArrayFloat::obterValor()
{
	return array[indice - 1];
}

void ArrayFloat::mostrarValores()
{
	for (int i = 0; i < tamanho; i++) {
		cout << array[i] << endl;
	}
}

void ArrayFloat::desalocaArray()
{
	delete[] array;
}

int ArrayFloat::getQtdElementos()
{
	return indice;
}

int ArrayFloat::getTamanhoArray()
{
	return tamanho;
}

void ArrayFloat::realocar()
{

	arrayTemp = new float[tamanho];
	tamanho += tamNovo;
	for (int i = 0; i < tamanho - tamNovo; i++) {
		arrayTemp[i] = array[i];
	}

	array = new float[tamanho];

	for (int i = 0; i < tamanho - tamNovo; i++) {
		array[i] = arrayTemp[i];
	}

	for (int i = tamanho - tamNovo; i < tamanho; i++) {
		array[i] = NULL;
	}



	delete[] arrayTemp;
}
