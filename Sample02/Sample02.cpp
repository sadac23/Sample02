// Sample02.cpp : �R���\�[�� �A�v���P�[�V�����̃G���g�� �|�C���g���`���܂��B
//

#include "stdafx.h"
#include <iostream>

#include "Sample02.h"

#define ASPECT_RATIO 1.653

#define CALL_WITH_MAX(a,b) f((a)>(b)?(a):(b))	//a,b�̑傫�������g����f���Ăяo��

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
	std::cout << "<< �T���v���R�[�h�J�n >>\n";

	/* define�̕��Q */

	//num2 = ASPECT_RATIO;
	//num2 = AspectRatio;

	/* ������̒萔���l���� */

	////�R�[�h���ɋL�q����������͒萔�̂��߁A���������悤�Ƃ��Ă����s���G���[�ƂȂ�܂��B
	//char * s = "abc";
	////s[1] = 'B';  // ���s���G���[
	//++s;
	//printf("%s\n", s);

	////���������Ȃ�������ɂ�const��t���܂��B��������΃R���p�C�����ɃG���[�ƂȂ�܂��B
	//const char * t = "abc";
	////t[1] = 'B';  // �R���p�C�����G���[

	////�l���A�h���X�������������֎~����ɂ�const��2�K�v�B
	//const char * const v = "abc";
	////++v;	  // �R���p�C�����G���[
	//printf("%c\n", *v);	//�擪����
	//printf("%s\n", v);

	////const string���y
	//const std::string w("abc");
	////w[1] = 'B';
	//printf("%d\n", &w);
	//printf("%s\n", w.c_str());

	//// �������������ꍇ��char�z��ɃR�s�[���܂��B���[�J���ϐ��ł͊ȒP�ȏ�����������܂��B
	////char u[] = "abc";
	////u[1] = 'B';  // OK
	////printf("%s\n", u);

	/* �N���X�̎��萔 */

	/* define�}�N�� */
	int a = 5, b = 0;
	CALL_WITH_MAX(++a, b);
	CALL_WITH_MAX(++a, b+10);
	printf("%d\n",a);

	a = 5, b = 0;
	callWithMax(++a, b);
	callWithMax(++a, b + 10);
	printf("%d\n", a);

	//	const char * s = "adachi";			//�A�h���X�ύX�\�ȃ|�C���^
//	const char * const t = "kawahara";	//�A�h���X�ύX�s�ȃ|�C���^
//	char * u = "ishiguro";
//
//	//	s[1] = 'B';  // ���s���G���[
//
//
//
//
//	while (*s != '\0') {
//		++s;
//	}
//
//	while (*t != '\0') {
//		//�R���p�C�����G���[
////		++t;
//	}
//
//	while (*u != '\0') {
//		++u;
//	}

//	std::cout << s;


//	std::cout << s1;

//	std::cout << num2;

	std::cout << "<< �T���v���R�[�h�I�� >>";
	std::cin >> num1;

	return 0;
}

const int GamePlayer::NumTurns;
//const int GamePlayer::NumTurns = 5;	//NG

const double GamePlayer::FudgeFactor = 1.35;	//OK

