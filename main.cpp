#include <DxLib.h>
#include <iostream>

using namespace std;

//struct Sumple {
//	char c;			//8ビット		1バイト
//	//(プログラマに見えない１バイト   
//	short w;		//１６ビット　  2バイト
//  int w;			// 32bit 4バイト
//};	// 24bit = 3byte


///関数にはスラッシュを三つ付けてコメントすることを意識する

// I,
// II,所見で分かりずらいところにコメント
// III,ヘッダにおける関数宣言にコメント
// IV,構造体やクラスの型にコメント

// Game Designe Patterns ←調べて見る

int WINAPI  WinMain(HINSTANCE, HINSTANCE, LPSTR, int) 
{
	/*Sumple s;
	cout << sizeof(s) << endl;*/

	// 下の三つはDxLib_Init()の前に書く
	DxLib::SetMainWindowText(_T("2016182_岩本直樹"));
	ChangeWindowMode(true);
	SetGraphMode(940,560, 32);

	DxLib_Init();
	
	SetDrawScreen(DX_SCREEN_BACK);

	while (ProcessMessage() == 0) 
	{
		ClearDrawScreen();
		
		ScreenFlip();

	}

	DxLib_End();
}

// 文字列の扱い
// 文字コードは、日本語を表すにも
// SJIS. EUC-JP, UTF-8, Unicode などがある

// SetWindowText("")