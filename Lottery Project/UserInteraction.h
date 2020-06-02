#pragma once
#pragma once
#include<iostream>
#include<string>
#include<vector>
#include <cstdlib>

using namespace std;
class TalkToUser
{
public:
	CreateLottoDraw CLD;

	void GreetUser() {
		vector<string>lottoList = LoadLottoGames();
		cout << "=============================================================================" << endl;
		cout << "Hello User, Which lottory game are we playing today?" << endl;
		for (auto i : lottoList) {
			cout << i << ' ' << endl;
		}
		cout << "=============================================================================" << endl;
	}

	vector<string> LoadLottoGames() {
		vector<string> lottoGames;
		lottoGames.push_back("1: EuroMillions");
		lottoGames.push_back("2: Lotto");
		lottoGames.push_back("3: Set For Life");
		lottoGames.push_back("4: ThunderBall");
		return lottoGames;
	}
	void Clear()
	{
#if defined _WIN32
		system("cls");
#elif defined (__LINUX__) || defined(__gnu_linux__) || defined(__linux__)
		system("clear");
#elif defined (__APPLE__)
		system("clear");
#endif
	}
	void Replay() {
		char type;
		do
		{
			cout << "Wana different game? [y/n]" << endl;
			cin >> type;
		} while (!cin.fail() && type != 'y' && type != 'n');

		if (type == 'y')
		{
			Clear();
			GreetUser();
			UserInput();
		}
		if (type == 'n')
		{
			exit(0);
		}
	}
	void UserInput() {
		GreetUser();
		int x;
		cout << "Please enter your number of your desired game!" << endl;
		cin >> x;
		cout << "=============================================================================" << endl;
		if (x > 4 || x < 0)
		{
			cout << "Hey that number isn't on the list!" << endl;
		}
		switch (x)
		{
		case 1:
			cout << "Euro Millions, good choice that is a 7 number game! " << endl;
			cout << "heres your numbers good luck" << endl;
			CLD.loadListSeven();
			cout << "\n=============================================================================" << endl;
			Replay();
			break;
		case 2:
			cout << "Regular Lottory, a true classic! Good luck its a 6 number game!" << endl;
			cout << "Never tell me the odds, best of luck with you numbers!" << endl;
			CLD.loadList();
			cout << "\n=============================================================================" << endl;
			Replay();
			break;
		case 3:
			cout << "Set for life, thats adventerous! thats a 6 number game!" << endl;
			cout << "best of luck with you numbers!" << endl;
			CLD.loadList();
			cout << "\n=============================================================================" << endl;
			Replay();
			break;
		case 4:
			cout << "Thunder ball, thats risky! good luck with your 6 numbers!" << endl;
			cout << "Hope for thunderous results!" << endl;
			CLD.loadList();
			cout << "\n=============================================================================" << endl;
			Replay();
			break;
		default:
			break;
		}
	}
};




