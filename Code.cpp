#include <bits/stdc++.h>
#define loop(i, n) for (int i = 0; i < n; i++)
#define loop1(i, n) for (int i = 1; i < n; i++)
#define vloop(v) for (auto it = v.begin(); it != v.end(); it++)
#define range(v) (v.begin(), v.end())
#define endl '\n'
#define vi vector<int>

typedef long long ll;
using namespace std;

int main()
{
	double weight, height;
	cout << "Your weight(kilograms) and your height(meters): ";
	cin >> weight >> height;
	cout << fixed << setprecision(2);

	double bmi = weight / pow(height, 2);

	cout << "Your BMI is: " << bmi << endl
		 << endl;
	cout << "BMI VALUES" << endl
		 << "Underweight: less than 18.5" << endl
		 << "Normal: betweeen 18.5 and 24.9" << endl
		 << "Overweight: between 25 and 29.9" << endl
		 << "Obese: 30 or greater" << endl;
}
