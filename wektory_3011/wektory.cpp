#include <iostream>
#include <math.h>
#include <ctime>

#define PI 3.14159265359

using namespace std;


struct wektor {
	double x;
	double y;

	wektor(double x=0, double y=0)
	{
		this->x = x;
		this->y = y;
	}

	void add(wektor wektor2)
	{
		this->x = x + wektor2.x;
		this->y = y + wektor2.y;
	}

	void subtract(wektor wektor2)
	{
		this->x = x - wektor2.x;
		this->y = y - wektor2.y;
	}

	void multiply(double n)
	{
		this->x *= n;
		this->y *= n;
	}

	void wyswietl_k()
	{
		cout << "Wartosci w ukladzie kartezjanskim" << endl;
		cout << "x: " << this->x << endl;
		cout << "y: " << this->y << endl;
	}

	void wyswietl_b()
	{

		double r = sqrt(x * x + y * y);
		double q = abs(atan(y / x) * (180/PI));

		cout << "Wartosci w ukladzie biegunowym" << endl;
		cout << "promien wodzacy: " << r << endl;
		cout << "amplituda punktu: " << q << endl;
	}

	void length()
	{
		cout << "dlugosc wektora: " << sqrt(x * x + y * y) << endl;
	}

};

int main()
{
	srand(time(NULL));
	
	int n;

	cout << "podaj n: " ;
	cin >> n;
	cout << endl;

	wektor suma(0, 0);


	for (int i = 0; i < n; i++)
	{
		int x = (rand() % 200) - 100;
		int y = (rand() % 200) - 100;

		wektor losowy(x, y);
		
		cout << i + 1 << ". x: " << x << " y: " << y << endl;

		suma.add(losowy);
	}

	suma.length();
}	
