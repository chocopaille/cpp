#include "../stdheader.h"
#include "mystery.h"

string	shuffle(string ref)
{
	int		rand_nb(0);
	string	new_word;

	while (ref.size())
	{
		rand_nb = rand() % ref.size();
		new_word += ref[rand_nb];
		ref.erase(rand_nb, 1);
	}
	return (new_word);
}

int		main()
{
	string	ref_mword;
	string	new_mword;
	string	user_word;
	int		find(0);
	int		continuer(1);

	srand(time(0));
	while (continuer)
	{
		find = 0;
		user_word = "";
		cout << "Saisissez un mot :" << endl;
		cin >> ref_mword;
		cout << "\n\n\n\n\n\n\n\n\n";
		new_mword = shuffle(ref_mword);
		while (find == 0)
		{
			cout << "Quel est ce mot : " << new_mword << " ?" << endl;
			cin >> user_word;
			if (user_word == ref_mword)
			{
				find = 1;
				cout << "Bravo ! Vous avez gagne" << endl;
			}
			else
				cout << "Ce n'est pas le mot !\n\n";
		}
		cout << "Voulez vous refaire une partie ?(1/0)" << endl;
		cin >> continuer;
	}
	return (0);
}
