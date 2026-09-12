#include "filippov.h"

// ===== Расчетные функции варианта 66 =====
// Конвертер величин: килограммы -> фунты
double kgToLb(double kg) {
	return kg * 2.20462;
}

// Конвертер величин: фунты -> килограммы
double lbToKg(double lb) {
	return lb / 2.20462;
}
