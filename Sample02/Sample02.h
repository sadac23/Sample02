#pragma once

class GamePlayer {
private:
	static const int NumTurns = 5;	//�錾���ŏ������\
//	static const int NumTurns;	//�錾���ŏ������ł��Ȃ������ꍇ
//	enum { NumTurns = 5 };

	int scores[NumTurns];

	static const double FudgeFactor;
};

int f(int i) { return 0; };
