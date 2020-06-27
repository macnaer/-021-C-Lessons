#include <iostream>
#include <ctime>

using namespace std;

int main() {
	srand(unsigned(time(NULL)));

	/*int days[7] = {4,6,2,5,9,1,8};*/
	//int days[7];
	//days[0] = 11;
	//days[1] = 18;
	//days[2] = 22;
	//days[3] = 16;
	//days[4] = 19;
	//days[5] = 27;
	//days[6] = 25;

	//cout << "Days = " << days[6] << endl;

	//days[6] = 30.9;
	//cout << "Days = " << days[6] << endl;

	//int days[7];
	//int counter = 0;

	//for (int i = 0; i < 7; i++) {
	//	days[i] = rand() % 40 - 20;
	//	if (days[i] > 10) {
	//		counter++;
	//	}
	//}

	//for (int i = 0; i < 7; i++) {
	//	cout << days[i] << endl;
	//}
	//cout << "===============================================" << endl;
	//cout << "Temperature more then 10 " << counter << " times" << endl;

	/*int arr[10];
	int dobutok = 1;
	
	for (int i = 0; i < 10; i++) {
		cout << "Enter " << i << " number " << endl;
		cin >> arr[i];
		dobutok *= arr[i];
	}

	cout << "=================================================" << endl;

	for (int i = 0; i < 10; i++) {
		cout << arr[i] << endl;
	}
	cout << "=================================================" << endl;
	cout << "Dobutok = " << dobutok << endl;
*/
	/*int arr[7] = { 4,6,3,5,8,9,4 };*/

	/*int arr[7];*/
	/*for (int i = 0; i < 7; i++) {
		cout << "Enter index " << i << endl;
		cin >> arr[i];
	}*/

	/*for (int i = 0; i < 7; i++) {
		arr[i] = rand() % 20 - 10;
	}

	for (int i = 0; i < 7; i++) {
		cout << arr[i] << endl;;
	}*/

	//Дано одновимірний масив. Знайти суму елементів з непарними індексами.


	//const int SIZE = 10;
	//int arr[SIZE];
	//int sum = 0;

	//for (int i = 0; i < SIZE; i++) {
	//	arr[i] = rand() % 20 + 1;
	//	cout << "arr [" << i << "]" << " = " << arr[i] << endl;
	//}

	//for (int i = 0; i < SIZE; i++) {
	//	if (i % 2 != 0) {
	//		cout << "index " << i << " value " << arr[i] << endl;
	//		sum += arr[i];
	//	}
	//}

	//cout << "Sum = " << sum << endl; 

	const int SIZE = 10;
	int arr[SIZE];
	int max = 0, min = 100;
	int min_index = 0, max_index = 0;;
	cout << "Before ==================>>>>> " << endl;
	for (int i = 0; i < SIZE; i++) {
		arr[i] = rand() % 20 + 1;
		cout << "arr [" << i << "]" << " = " << arr[i] << endl;
	}

	for (int i = 0; i < SIZE; i++) {
		if (arr[i] > max) {
			max = arr[i];
			max_index = i;
		}
		if (arr[i] < min) {
			min = arr[i];
			min_index = i;
		}
	}


	cout << "Max element = " << max << " max index = " << max_index << endl;
	cout << "Min element = " << min << " min index = " << min_index << endl;
	

	cout << "After ==================>>>>> " << endl;
	int tmp = 0;
	tmp = arr[max_index];
	arr[max_index] = arr[min_index];
	arr[min_index] = tmp;
	for (int i = 0; i < SIZE; i++) {
		cout << "arr [" << i << "]" << " = " << arr[i] << endl;
	}


	system("pause");
	return 0;
}