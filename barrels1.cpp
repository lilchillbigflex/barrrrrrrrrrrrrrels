#include <string>
#include <iostream>
#include <ctime>
#include <random>
#include <vector>

using namespace std;

int main()
{
	srand(time(NULL));								//вписываем это для того, чтобы рандомайзер не выдавал каждый раз одни и те же числа
	setlocale(LC_ALL, "Russian");

	int barrels;
	vector <int> vector;
	cout << "enter quantity of barrels In bag:\n";
	cin >> barrels;
	cout << endl;
	int i = 0;
	int current_barrel = 0;
	while (i < barrels) {
		do {
			current_barrel = rand() % barrels;											//выбираем случайный номер бочонка в пределах введенных
		} 
		while (find(vector.begin(), vector.end(), current_barrel) != vector.end());		//проходит по всем элементам массива(вектора) в поисках выпавшего в рандомайзере
			vector.push_back(current_barrel);											//удаляем выпавший элемент из массива(вектора), чтобы больше этот бочок не выпадал
		cout << "\npulled out barrel № " << current_barrel + 1 << "\n\n";
		i++;
		system("pause");																//нажмите любую клавишу для продолжения
	}
	cout << "\ncalculation is over\n\n\n ";
}
