#include<iostream>
#include <stdlib.h>
#include<time.h>
using namespace std;
void showArr(int arr[], int lenght) {
	cout << "[";
	for (int i = 0; i < lenght; i++) {
		cout << arr[i] << ", ";
	}
	cout << "\b\b]";
}


//1
int del(int num1, int num2) {
	int max=0;
	for (int i = 1; i <= num1; i++) {
		if (num1 % i == 0&&num2%i==0)
			max = i;
	}
	return max;
}
//2
int resurveNumber(int num) {
	int numF = 0;
	for (int i = 0; i < num;) {
		numF = numF * 10;
		numF = numF + num % 10;
		num = num / 10;
	}
	return numF;

}
//3
int sortArr(int arr[], int lenght, int n) {
	int temp = -1;
	for (int i = lenght - 1; i > 0; i--) {
		if (arr[i] == n) {
			temp = i;
		}
	}
	for (int i = lenght - 1; i > temp; i--) {
		for (int j = temp; j < i; j++) {
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);

		}
	}
	
	return temp;
}
//4
void z4arr(int arr[], int lenght, int a, int b) {
	if (b < a)
		swap(b, a);
	cout << "[";
	for (int i = 0; i < lenght; i++) {
		arr[i] = rand() % (b-a)+a;
		cout << arr[i] << ", ";
	}
	cout << "\b\b]";
}





int main() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	int n, m,n1,n2;

	//Задача 1
	cout <<"Задача 1\n";
	cout<<"Наибольший общий делитель: " << del(12,18) << endl;

	//Задача 2
	cout << "\nЗадача 2\n";
	cout << "Введите число: ";
	cin >> m;
	cout <<"Число "<<m<<" в отраженном виде "<< resurveNumber(m);
	cout << endl;

	//Задача 3
	cout << "\nЗадача 3\nМассив\n";
	int arr[10] = { 5,4,3,5,8,7,9,3,4,0 };
	showArr(arr, 10);
	cout << "\nВведите число N: ";
	cin >> n;
	cout<<"Позиция в массиве = "<<sortArr(arr, 10, n);
	cout << endl;
	cout << "Отсортированный массив:\n";
	showArr(arr, 10);
	cout << endl;

	//Задача 4
	cout << "\nЗадача 4\n";
	int z4[10];
	cout << "Введите начало диапазона: ";
	cin >> n1;
	cout << "Введите конец диапазона: ";
	cin >> n2;
	z4arr(z4, 10, n2, n1);

	cout << "\n\n";
	system("pause");

	return 0;
}