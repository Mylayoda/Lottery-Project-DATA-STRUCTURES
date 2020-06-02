#pragma once
#pragma once
#include <time.h>
#include<stdlib.h>
#include <random>
#include <iostream>

using namespace std;
class CreateLottoNumbers {

public:

	int numberPicker() {
		// create random numbers between 1- 59 for lottory, make a reusable component for many lotto games
		std::random_device numb;
		std::mt19937 rng(numb());
		std::uniform_int_distribution<std::mt19937::result_type> dist59(1, 59); // range 1-59
		int randLottoNum = dist59(rng);
		return randLottoNum;
	}
};
