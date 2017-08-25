#include <iostream>
using namespace std;

int main()
{
	int answer = 5;
	int guess;
	bool tryagain = true;

	cout << "Guess what number between I'm thinking of!" << endl;

	while (tryagain)
	{
		cin >> guess;

		if (guess == answer)
		{
			cout << "You got it right!" << endl;

			tryagain = false;
		}
		else if (guess > answer)
		{
			cout << "too high.." << endl;
		}
		else if (guess < answer)
		{
			cout << "too low.." << endl;
		}
	}

	return 0;
}