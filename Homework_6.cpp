
#include <iostream>
using namespace std;

int main()
{
	int choise;
	string skip;
	while (true)
	{
		cout << "choose task:\n1 - Bank/% in month\n2 - much/buy\n3 - paint for room\n0 - end\n";
		cin >> choise;
		if (choise == 1)
		{
			float grn;
			float percents_y;
			cout << "\nenter much money in grn:\n";
			cin >> grn;
			cout << "\nenter year percent what bank give:\n";
			cin >> percents_y;
			cout << "\nyour month pay: " << grn * ((percents_y / 100) / 12) << "\n";
		}
		else if (choise == 2)
		{
			double price;
			double money;
			cout << "\nenter price of item:\n";
			cin >> price;
			cout << "\nenter your cash:\n";
			cin >> money;
			cout << "\nmax number of items: " << int(money / price) << "cahs left: " << money - (int(money / price)) * price << "\n";
		}
		else if (choise == 3)
		{
			double lenght;
			double hight;
			double width;
			int percent;
			cout << "\nenter room: lenght; hight; width; percent of space on walls what taken by doors/windows\nPrees enter after each atribute:\n";
			cin >> lenght >> hight >> width >> percent;
			float wall_0 = hight * width;
			float wall_1 = hight * lenght;
			cout << "M^2 of paint need: " << double(wall_0 * 2 + wall_1 * 2) - ((wall_0 * 2 + wall_1 * 2) * (percent / 100.0)) << "\n";
		}
		else if (choise == 0)
		{
			exit(1);
		}
		cout << "\npress any button + enter to continue:\n";
		cin >> skip;
		system("cls");
	}

}