// Parcial1segundosemestre.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include<stdlib.h>
#include<time.h>
#include <iostream>
#include <charconv>
#include <string>
#include <vector>
using namespace std;
int arre[10];
int cont = 0;
int cade[10] ;
 char cadec[10];
string arre2[10] = { "hola" ,"mundo","tengo","hambre","y","sed","me","duele","la","cabeza" };
void seleccion(int arr[], int n) {
	for (int i = 0; i < n - 1; i++)
	{
		int min_idx = i;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[min_idx])
			{
				min_idx = j;
			}
		}
		int temp = arr[min_idx];
		arr[min_idx] = arr[i];
		arr[i] = temp;
	}

}
void insercion(string arr[], int n) {
	for (int i = 1; i < n; i++)
	{
		string key = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j--;

		}
		arr[j + 1] = key;

	}
	

}
void burbujaSeleccion(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
		int min_idx = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[min_idx]) {
				min_idx = j;
			}
		}
		int temp = arr[min_idx];
		arr[min_idx] = arr[i];
		arr[i] = temp;
	}
}

void arreglos() {
	for (int i = 0; i < 10; i++)
	{
		
		arre[i]= 1 + rand() % (101 - 1);
	}
	string arre2[10] = { "hola" ,"mundo","tengo","hambre","y","sed","me","duele","la","cabeza" };

}
void seleascent() {
	system("cls");
	arreglos();
	cout << "Arreglo sin ordenar" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << arre[i] << endl;
	}
	cout << "Arreglo  ordenado" << endl;
	int n = sizeof(arre) / sizeof(arre[0]);
	seleccion(arre,n);
	for (int i = 0; i < 10; i++)
	{
		cout << arre[i] << endl;
	}

	system("pause");
	system("cls");
}
void insercadena() {
	system("cls");
	arreglos();
	cout << "Arreglo sin ordenar" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << arre2[i] << endl;
	}
	cout << "Arreglo  ordenado" << endl;
	int n = sizeof(arre2) / sizeof(arre2[0]);
	insercion(arre2, n);
	for (int i = 0; i < 10; i++)
	{
		cout << arre2[i] << endl;
	}

	system("pause");
	system("cls");
}
void mezcla() {
	system("cls");
	arreglos();
	cout << "Arreglo sin ordenar" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << arre[i] << endl;
	}
	cout << "Arreglo  ordenado" << endl;
	int n = sizeof(arre) / sizeof(arre[0]);
	burbujaSeleccion(arre, n);
	for (int i = 0; i < 10; i++)
	{
		cout << arre[i] << endl;
	}

	system("pause");
	system("cls");
}
int busquedaLineal(int arreglo[], int tamano, int valorBuscado) {
	for (int i = 0; i < tamano; i++) {
		if (arreglo[i] == valorBuscado) {
			return i; // Se encontró el valor, devuelve el índice
		}
	}
	return -1; // No se encontró el valor
}

void lineal2(){
	int busq;

	for (int i = 0; i < 10; i++)
	{

		arre[i] = 1 + rand() % (11 - 1);
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arre[i] << endl;
	}
	cout << "Ingrese su busqueda" << endl;
	cin >> busq;
	int n = sizeof(arre) / sizeof(arre[0]);
	int pos= busquedaLineal(arre,n,busq);
	if (pos==-1)
	{
		cout << "no existe el valor" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "la posicion del numero buscado es: " << pos<<endl;
		cout<< arre[pos]<<endl;
		system("pause");
		system("cls");

	}
}
int busqedabinaria(int arreglo[], int inicio, int fin, int valorbuscado) {
	if (inicio<= fin)
	{
		int medio = inicio + (fin - inicio) / 2;
		if (arreglo[medio]==valorbuscado)
		{
			return medio;
		}
		if (arreglo[medio]>valorbuscado)
		{
			return busqedabinaria(arreglo, inicio, medio - 1, valorbuscado);

		}
		return busqedabinaria(arreglo, medio + 1, fin, valorbuscado);
	}
	return-1;
}
int busquedaLineal2(int arreglo[], int tamano, int valorBuscado) {


	for (int i = 0; i < tamano; i++) {
		if (arreglo[i] == valorBuscado) {
			cont++; 
		}
	}

	if (cont > 0) {
		return 0; 
	}
	else {
		return -1; 
	}
}

void lineal22() {
	int busq;
	 cont = 0;

	for (int i = 0; i < 10; i++)
	{

		arre[i] = 1 + rand() % (11 - 1);
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arre[i] << endl;
	}
	cout << "Ingrese su busqueda" << endl;
	cin >> busq;
	int n = sizeof(arre) / sizeof(arre[0]);
	int pos = busquedaLineal2(arre, n, busq);
	if (pos == -1)
	{
		cout << "no existe el valor" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "la cantidad de veces que se repite es: " << cont << endl;
		system("pause");
		system("cls");

	}
}
void busqbina() {
	int busq;

	for (int i = 0; i < 10; i++)
	{

		arre[i] = 1 + rand() % (11 - 1);
	}
	int n = sizeof(arre) / sizeof(arre[0]);
	seleccion(arre,n);
	for (int i = 0; i < 10; i++)
	{
		cout << arre[i] << endl;
	}
	cout << "Ingrese su busqueda" << endl;
	cin >> busq;
	
	int pos = busqedabinaria(arre,0, n-1, busq);
	if (pos == -1)
	{
		cout << "no existe el valor" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "la posicion del numero buscado es: " << pos << endl;
		cout << arre[pos] << endl;
		system("pause");
		system("cls");

	}


}
int main()
{
	bool wl = true;
	int op = 0;
	while (wl)
	{
		system("cls");
		cout << "Bienvenido!"<<endl;
		cout << "1. Seleccion ascedente" << endl;
		cout << "2. Cadena de texto" << endl;
		cout << "3. Mezcla burbuja y seleccion" << endl;
		cout << "4.lineal" << endl;
		cout << "5. binaria" << endl;
		cout << "6. contador" << endl;
		cout << "7. salir" << endl;

		cin >> op;
		if (op==1)
		{
			seleascent();
		}
		if (op==2)
		{
			insercadena();
			
		}
		if (op==3)
		{
			mezcla();
		} 
		if (op==4)
		{
			lineal2();
		}
		if (op==5)
		{
			busqbina();
		}
		if (op==6)
		{
			lineal22();
		}
		if (op == 7)
		{
			wl = false;
		}

	}
}


