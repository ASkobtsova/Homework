/*This program has to contain the Date structure and:
1. a method that writes out the name of the day of the week by date;
2. a method that determines how many days are left until the New Year;
3. the operator minus the return, the number of days elapsed between dates;
4. the operator plus, taking an integer number of days and returning the date separated by that number of days;
5. a method that finds the next date-palindrome.*/

#include <iostream>
using namespace std;

int gcd(int a, int b)
{
	int m = 0;
	for (int i = a; i > 1; i--)
	{
		if ((i % b) == 0)
		{
			m = i;
			break;
		};
	};
	return m;
}

struct Date
{
	int Day;
	int Month;
	int Year;

	Date()
	{
		Day = 0;
		Month = 0;
		Year = 0;
	}

	void input()
	{
		cin >> Day >> Month >> Year;
	}

	void output()
	{
		if ((Day / 10) == 0) { cout << 0; };
		cout << Day << ".";
		if ((Month / 10) == 0) { cout << 0; };
		cout << Month << "." << Year;
	}

	bool ch()
	{
		if ((Year % 400) == 0)
            {
                return true;
        }
		else
		{
			if ((Year % 100) == 0)
                {
                    return false;
            }
			else
			{
				if ((Year % 4) == 0) { return true; }
				else { return false; };
			};
		};
	}

	int days()
	{
		if (Month == 2)
		{
			if (ch()) { return 29; }
			else { return 28; };
		}
		else
		{
			if (((Month <= 7) && (((Month % 2) != 0))) || ((Month >= 8) && ((Month % 2) == 0)))
			{
				return 31;
			}
			else { return 30; };
		};
	}

	int months()
	{
		if ((Month == 1) || (Month == 10)) { return 0; };
		if (Month == 5) { return 1; };
		if (Month == 8) { return 2; };
		if ((Month == 2) || (Month == 3) || (Month == 11)) { return 3; };
		if (Month == 6) { return 4; };
		if ((Month == 9) || (Month == 12)) { return 5; };
		if ((Month == 4) || (Month == 7)) { return 6; };
	}

	int years()
	{
		int n = (Year / 100);
		n -= gcd(n, 4);
		n *= 5;
		n -= gcd(n, 7);
		return n;
	}

//TASK 21

	int day_name()
	{
		int m = Day + months();
		m -= gcd(m, 7);
		int p = (Year % 100);
		p -= gcd(p, 28);
		p += ((Year % 100) / 4);
		p += years();
		if (((Month == 1) || (Month == 2)) && (ch() == 1)) { p--; };

		m += p;
		m -= gcd(m, 7);

		return m;
	}

	//TASK 22

	int New_Year()
	{
		int a = Day, b = Month, c = Year;
		int p = 0;
		while (Month < 12)
		{
			p += days();
			Month++;
		};
		while (Day <= 31)
		{
			p++;
			Day++;
		};

		Day = a;
		Month = b;
		Year = c;

		return p;
	}

	//TASK 23

	int &operator-(Date &B)
	{
		int a = Day, b = Month, c = Year;
		int n = (New_Year() - B.New_Year()), k = 0;

		if (Year > B.Year)
		{
			while (B.Year < Year)
			{
				B.Year++;
				if (B.ch()) { k -= 366; }
				else { k -= 365; };
			};
		}
		else
		{
			while (Year < B.Year)
			{
				Year++;
				if (ch()) { k += 366; }
				else { k += 365; };
			};
		};
		B.Day = 0;
		B.Day += n;
		B.Day += k;
		if (B.Day < 0) { B.Day = (-B.Day); };
		Day = a;
		Month = b;
		Year = c;
		return (B.Day);
	}

	//TASK 24

	Date &operator+(int a) {
		Day += a;

		while (Day > days())
		{
			Day -= days();
			Month++;
		}

		while (Month > 12)
		{
			Month -= 12;
			Year++;
		}
		return *this;
	}
	
	//TASK 25
	
	Date palindrom() {
		int*date = new int[8];
		int k = 0;

		while (k == 0)
		{
			int m = 0;
			date[0] = (Day / 10);
			date[1] = (Day % 10);
			date[2] = (Month / 10);
			date[3] = (Month % 10);
			date[4] = (Year / 1000);
			date[5] = ((Year / 100) % 10);
			date[6] = ((Year / 10) % 10);
			date[7] = (Year % 10);
			for (int i = 0; i <= 3; i++)
			{
				if (date[i] != date[7 - i]) break;
				m++;
			}
			if (m == 4) { break; }
			else
			{
				Day++;
				if (Day > days())
				{
					Day -= days();
					Month++;
				}
				if (Month > 12)
				{
					Month -= 12;
					Year++;
				}
			}
		}
		return *this;
	}
};

int main()
{
	Date F;
	cout << "Enter the date: " << endl;
	F.input();
	F.output();
	cout << endl;
	if (F.day_name() == 1)
        {
            cout << "Sunday";
    };
	if (F.day_name() == 2)
        {
            cout << "Monday";
    };
	if (F.day_name() == 3)
        {
            cout << "Tuesday";
    };
	if (F.day_name() == 4)
        {
            cout << "Wednesday";
    };
	if (F.day_name() == 5)
        {
            cout << "Thursday";
    };
	if (F.day_name() == 6)
        {
            cout << "Friday";
    };
	if ((F.day_name() == 0) || (F.day_name() == 7))
        {
            cout << "Saturday";
    };
	cout << endl;
	cout << F.New_Year() << " days left until the New Year" << endl;
	cout << "Next date palindrom: ";
	F.palindrom();
	F.output();
	cout << endl;
	return 0;
}
