#include <iostream>
using namespace std;
int main()
{
	cout << "\t\tTask 1\n";
	//Користувач вводить з клавіатури відстань до аеропорту і час, за який потрібно доїхати.Обчислити швидкість, з якою йому потрібно їхати.
	double distance;
	double minutes;
	double time;
	double speed;
	cout << "Enter distance(km) to nearby airport: ";
	cin >> distance;
	cout << "Enter time(minutes), in which you need to get there: ";
	cin >> minutes;
	time = minutes / 60;
	speed = distance / time;
	cout << "You need to drive with speed of " << speed << "km per hour\n";

	cout << "\t\tTask 2\n";
	//Користувач вводить з клавіатури час початку і час завершення використання скутера(години, хвилини та секунди).Порахувати вартість подорожі, якщо вартість хвилини — 2 гривні.
	int start_hour, start_minute, start_second, end_hour, end_minute, end_second;
	int cost_per_minute = 2;
	cout << "Enter start time (hh mm ss): ";
	cin >> start_hour >> start_minute >> start_second;
	cout << "Enter end time (hh mm ss): ";
	cin >> end_hour >> end_minute >> end_second;
	int start_time_in_seconds = start_hour * 3600 + start_minute * 60 + start_second;
	int end_time_in_seconds = end_hour * 3600 + end_minute * 60 + end_second;
	int journey_duration_in_seconds = end_time_in_seconds - start_time_in_seconds;
	int journey_duration_in_minutes = journey_duration_in_seconds / 60;
	int cost = journey_duration_in_minutes * cost_per_minute;
	cout << "Total cost of the journey is: " << cost << " UAH" << endl;

	cout << "\t\tTask 3\n";
	//Користувач вводить з клавіатури відстань, витрату бензину на 100 км і вартість трьох видів бензину. Вивести на екран порівняльну таблицю з вартістю подорожі на різних видах палива.
	double distance_of_trip, benz_per_100, amount_benz, DP, A_95, GAS, trip_price_DP, trip_price_A_95, trip_price_GAS;     //GAS - 30 grn; DP - 55 grn; A_95 - 50 grn.
	cout << "Enter distance of trip(km): ";
	cin >> distance_of_trip;
	cout << "Enter benzin usage per 100km: ";
	cin >> benz_per_100;
	cout << "Enter price of DP: ";
	cin >> DP;
	cout << "Enter price of A_95: ";
	cin >> A_95;
	cout << "Enter price of GAS: ";
	cin >> GAS;
	amount_benz = distance_of_trip / benz_per_100;
	trip_price_DP = DP * amount_benz;
	trip_price_A_95 = A_95 * amount_benz;
	trip_price_GAS = GAS * amount_benz;
    cout<<"\nThe prices of trip are:" << "\t" << "DP " << trip_price_DP << " grn;" << "\t" << "A_95 " << trip_price_A_95 << " grn;" << "\t" << "GAS " << trip_price_GAS << " grn;\n";

	cout << "\t\tTask 4\n";
	//Користувач вводить з клавіатури час у секундах, що минув з початку дня. Вивести на екран поточний час у годинах, хвилинах і секундах.Порахувати, скільки годин, хвилин і секунд залишилося до півночі.
	int s;
	cout << "Please enter the time in seconds: "; cin >> s;
	double d, h, m, sec;
	d = double(s) / 86400;
	h = (d - int(d)) * 24;
	m = (h - int(h)) * 60;
	sec = (m - int(m)) * 60;
	cout << "Current time is: " << int(h) << " hours, " << int(m) << " minutes, " << int(sec) << " seconds\n";

	cout << "\t\tTask 5\n";
	//Користувач вводить з клавіатури час у секундах, що минув з початку робочого дня. Порахувати,скільки цілих годин йому залишилося сидіти на роботі,якщо робочий день — 8 годин.
	const int working_day = 28800;
	int hours_left,seconds;
	cout << "Enter time in seconds: ";
	cin >> seconds;
	hours_left = (working_day - seconds)/3600;
	cout << "Your working day ends in " << hours_left << " hours.\n";
	return 0;
}