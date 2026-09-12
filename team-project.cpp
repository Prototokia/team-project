// Командный проект. Группа ПИ-52.
// Команда: Филиппов Сергей (в. 66, разработчик), Важев Артем (в. 71, техлид).
// === БЛОК ПОДКЛЮЧЕНИЙ: каждый участник добавляет свой заголовочный файл ===
#include "team-project.h"
#include "vazhev.h"
// #include "petrov.h"
// === КОНЕЦ БЛОКА ПОДКЛЮЧЕНИЙ ===
int main() {
	int choice;
	int sec;
	do {
		std::cout << "\n=== Командный проект: сборник расчётов ===\n";
		// === БЛОК МЕНЮ: каждый участник добавляет свои пункты ===
		// === КОНЕЦ БЛОКА МЕНЮ ===
		std::cout << "0. Выход\n";
		std::cout << "1. Секунды => часы\n";
		std::cout << "2. Секунды => минуты\n";
		std::cout << "3. Секунды => секунды\n";
		std::cout << "Выберите пункт: ";
		std::cin >> choice;
		switch (choice) {
		case 1: {
			std::cout << "Введите количество секунд: ";
			std::cin >> sec;
			std::cout << "В " << sec << " секундах " << hoursOf(sec) << " часов.\n";
			break;
		}
		case 2: {
			std::cout << "Введите количество секунд: ";
			std::cin >> sec;
			std::cout << "В " << sec << " секундах " << minutesOf(sec) << " минут.\n";
			break;
		}
		case 3: {
			std::cout << "Введите количество секунд: ";
			std::cin >> sec;
			std::cout << "В " << sec << " секундах " << minutesOf(sec) << " секунд.\n";
			break;
		}
			
		case 0:
			std::cout << "Работа завершена.\n";
			break;
		default:
			std::cout << "Такого пункта нет.\n";
		}
	} while (choice != 0);
	return 0;
}
