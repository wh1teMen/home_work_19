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

	//������ 1
	cout <<"������ 1\n";
	cout<<"���������� ����� ��������: " << del(12,18) << endl;

	//������ 2
	cout << "\n������ 2\n";
	cout << "������� �����: ";
	cin >> m;
	cout <<"����� "<<m<<" � ���������� ���� "<< resurveNumber(m);
	cout << endl;

	//������ 3
	cout << "\n������ 3\n������\n";
	int arr[10] = { 5,4,3,5,8,7,9,3,4,0 };
	showArr(arr, 10);
	cout << "\n������� ����� N: ";
	cin >> n;
	cout<<"������� � ������� = "<<sortArr(arr, 10, n);
	cout << endl;
	cout << "��������������� ������:\n";
	showArr(arr, 10);
	cout << endl;

	//������ 4
	cout << "\n������ 4\n";
	int z4[10];
	cout << "������� ������ ���������: ";
	cin >> n1;
	cout << "������� ����� ���������: ";
	cin >> n2;
	z4arr(z4, 10, n2, n1);

	cout << "\n\n";
	system("pause");

	return 0;
}