#include <iostream>
#include <string>

using namespace std;

int main()
{
	int		i;
	int j;
	//string str;

	//getline(cin, str);
	//cout << str << '\n';
	cin >> i;
	cin.ignore();
	cin >> j;
	//cout << var << endl;
	cout << "div : " << i / j << endl << "reste : " << i % j << endl;
	
	return 0;
}
