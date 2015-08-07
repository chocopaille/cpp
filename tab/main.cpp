#include "../stdheader.h"

int main()
{
	//string	*tab;
	int		*tab2;
	int		i;

	tab2 = (int *)malloc(sizeof(*tab2) + 58);
	for (i = 0; i < 10; i++)
	{
		tab2[i] = i * 8 - 57 + (i + 9 * 32);
		cout << tab2[i] << endl;
	}

	return 0;
}
