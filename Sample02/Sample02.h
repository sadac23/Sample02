#pragma once

class GamePlayer {
private:
	static const int NumTurns = 5;	//éŒ¾•”‚Å‰Šú‰»‰Â”\
//	static const int NumTurns;	//éŒ¾•”‚Å‰Šú‰»‚Å‚«‚È‚©‚Á‚½ê‡
//	enum { NumTurns = 5 };

	int scores[NumTurns];

	static const double FudgeFactor;
};

int f(int i) { return 0; };
