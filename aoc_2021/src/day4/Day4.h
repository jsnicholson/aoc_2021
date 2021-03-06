#pragma once
#include "Day.h"
#include <string>
#include <vector>

class Day4 : public Day {

	typedef std::pair<int, bool> boardValue;
	typedef std::vector<std::vector<boardValue>> board;

private:
	void Parse() override;
	int Part1() override;
	int Part2() override;

private:
	std::vector<int> vectorBingoNumbers;
	std::vector<board> vectorBoards;
	size_t boardDimension;

private:
	void MarkNumbers(int num);
	int CheckForWin(int num);

public:
	//std::string GetInput() override { return std::string("resources\\day4_temp.txt"); }
};