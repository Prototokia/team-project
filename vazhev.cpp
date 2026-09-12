int SECONDS_IN_HOUR = 3600;
int SECONDS_IN_MINUTE = 60;

// Перевод секунд в часы
int hoursOf(int sec) {
	return sec / SECONDS_IN_HOUR;
}

// Перевод секунд в минуты
int minutesOf(int sec) {
	return (sec % SECONDS_IN_HOUR) / SECONDS_IN_MINUTE;
}

// Перевод секунд в секунды
int secondsOf(int sec) {
	return sec % SECONDS_IN_MINUTE;
}