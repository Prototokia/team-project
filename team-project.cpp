// Командный проект. Группа ПИ-52.
// Команда: Филиппов Сергей (в. 66, разработчик), Важев Артем (в. 71, техлид).
// === БЛОК ПОДКЛЮЧЕНИЙ: каждый участник добавляет свой заголовочный файл ===
#include "team-project.h"
#include "vazhev.h"
#include "filippov.h"
// === КОНЕЦ БЛОКА ПОДКЛЮЧЕНИЙ ===
// ===== Главная функция: меню =====
int main() {
	setlocale(LC_ALL, "Rus");
	int choice;
	int sec;
	double kg, lb;

	do {
		std::cout << "\n=== Командный проект: сборник расчётов ===\n";
		std::cout << "0. Выход\n";
		std::cout << "1. Перевести килограммы в фунты\n";
		std::cout << "2. Перевести фунты в килограммы\n";
		std::cout << "3. Секунды => часы\n";
		std::cout << "4. Секунды => минуты\n";
		std::cout << "5. Секунды => секунды\n";
		std::cout << "Выберите пункт: ";
		std::cin >> choice;
		switch (choice) {
		case 1:
			std::cout << "Введите массу в килограммах: ";
			std::cin >> kg;
			if (kg < 0) {
				std::cout << "Масса не может быть отрицательной.";
				break;
			}
			std::cout << "Масса в фунтах: " << kgToLb(kg) << "\n";
			break;
		case 2:
			std::cout << "Введите массу в фунтах: ";
			std::cin >> lb;
			if (lb < 0) {
				std::cout << "Масса не может быть отрицательной.";
				break;
			}
			std::cout << "Масса в килограммах: " << lbToKg(lb) << "\n";
			break;
		case 3: {
			std::cout << "Введите количество секунд: ";
			std::cin >> sec;

			if (sec < 0) std::cout << "Количество секунд не может быть отрицательным\n";
			else std::cout << "В " << sec << " секундах " << hoursOf(sec) << " часов.\n";

			break;
		}
		case 4: {
			std::cout << "Введите количество секунд: ";
			std::cin >> sec;

			if (sec < 0) std::cout << "Количество секунд не может быть отрицательным\n";
			else std::cout << "В " << sec << " секундах " << minutesOf(sec) << " минут.\n";

			break;
		}
		case 5: {
			std::cout << "Введите количество секунд: ";
			std::cin >> sec;

			if (sec < 0) std::cout << "Количество секунд не может быть отрицательным\n";
			else std::cout << "В " << sec << " секундах " << minutesOf(sec) << " секунд.\n";

			break;
		}
		case 0:
			std::cout << "Работа завершена.\n";
			break;
		default:
			std::cout << "Такого пункта нет.\n";
		}
	} 
	while (choice != 0);

	return 0;
}
