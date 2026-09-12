// Перевод секунд в часы
int hoursOf(int sec) {
	return sec / 3600;
}

// Перевод секунд в минуты
int minutesOf(int sec) {
	return (sec % 3600) / 60;
}

// Перевод секунд в секунды
int secondsOf(int sec) {
	return sec % 60;
}