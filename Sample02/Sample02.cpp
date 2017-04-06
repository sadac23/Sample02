// Sample02.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"
#include <iostream>

#include "Sample02.h"

#define ASPECT_RATIO 1.653

#define CALL_WITH_MAX(a,b) f((a)>(b)?(a):(b))	//a,bの大きい方を使ってfを呼び出す

int num1;
double num2;

const double AspectRatio = 1.653;

const char * const authorName = "Scott Meyers";
char * const authorName1 = "Scott Meyers";
//char * authorName1 = "Scott Meyers";

const char *s1 = "abc";
const char *s2 = "def";

inline void callWithMax(const int a, const int b) {
	f(a > b ? a : b);
}

int main()
{
	std::cout << "<< サンプルコード開始 >>\n";

	/* defineの弊害 */

	//num2 = ASPECT_RATIO;
	//num2 = AspectRatio;

	/* 文字列の定数を考える */

	////コード中に記述した文字列は定数のため、書き換えようとしても実行時エラーとなります。
	//char * s = "abc";
	////s[1] = 'B';  // 実行時エラー
	//++s;
	//printf("%s\n", s);

	////書き換えない文字列にはconstを付けます。そうすればコンパイル時にエラーとなります。
	//const char * t = "abc";
	////t[1] = 'B';  // コンパイル時エラー

	////値もアドレスも書き換えを禁止するにはconstが2個必要。
	//const char * const v = "abc";
	////++v;	  // コンパイル時エラー
	//printf("%c\n", *v);	//先頭文字
	//printf("%s\n", v);

	////const stringが楽
	//const std::string w("abc");
	////w[1] = 'B';
	//printf("%d\n", &w);
	//printf("%s\n", w.c_str());

	//// 書き換えたい場合はchar配列にコピーします。ローカル変数では簡単な書き方があります。
	////char u[] = "abc";
	////u[1] = 'B';  // OK
	////printf("%s\n", u);

	/* クラスの持つ定数 */

	/* defineマクロ */
	int a = 5, b = 0;
	CALL_WITH_MAX(++a, b);
	CALL_WITH_MAX(++a, b+10);
	printf("%d\n",a);

	a = 5, b = 0;
	callWithMax(++a, b);
	callWithMax(++a, b + 10);
	printf("%d\n", a);

	//	const char * s = "adachi";			//アドレス変更可能なポインタ
//	const char * const t = "kawahara";	//アドレス変更不可なポインタ
//	char * u = "ishiguro";
//
//	//	s[1] = 'B';  // 実行時エラー
//
//
//
//
//	while (*s != '\0') {
//		++s;
//	}
//
//	while (*t != '\0') {
//		//コンパイル時エラー
////		++t;
//	}
//
//	while (*u != '\0') {
//		++u;
//	}

//	std::cout << s;


//	std::cout << s1;

//	std::cout << num2;

	std::cout << "<< サンプルコード終了 >>";
	std::cin >> num1;

	return 0;
}

const int GamePlayer::NumTurns;
//const int GamePlayer::NumTurns = 5;	//NG

const double GamePlayer::FudgeFactor = 1.35;	//OK

