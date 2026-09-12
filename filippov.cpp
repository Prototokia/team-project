const double KG_TO_LB = 2.20462;
// ===== Расчетные функции варианта 66 =====
// Конвертер величин: килограммы -> фунты
double kgToLb(double kg) {
	return kg * KG_TO_LB;
}

// Конвертер величин: фунты -> килограммы 
double lbToKg(double lb) {
	return lb / KG_TO_LB;
}
