#pragma once

class GamePlayer {
private:
	static const int NumTurns = 5;	//宣言部で初期化可能
//	static const int NumTurns;	//宣言部で初期化できなかった場合
//	enum { NumTurns = 5 };

	int scores[NumTurns];

	static const double FudgeFactor;
};

int f(int i) { return 0; };
