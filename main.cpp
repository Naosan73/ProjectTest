#include <DxLib.h>
#include <iostream>

using namespace std;

//struct Sumple {
//	char c;			//8�r�b�g		1�o�C�g
//	//(�v���O���}�Ɍ����Ȃ��P�o�C�g   
//	short w;		//�P�U�r�b�g�@  2�o�C�g
//  int w;			// 32bit 4�o�C�g
//};	// 24bit = 3byte


///�֐��ɂ̓X���b�V�����O�t���ăR�����g���邱�Ƃ��ӎ�����

// I,
// II,�����ŕ����肸�炢�Ƃ���ɃR�����g
// III,�w�b�_�ɂ�����֐��錾�ɃR�����g
// IV,�\���̂�N���X�̌^�ɃR�����g

// Game Designe Patterns �����ׂČ���

int WINAPI  WinMain(HINSTANCE, HINSTANCE, LPSTR, int) 
{
	/*Sumple s;
	cout << sizeof(s) << endl;*/

	// ���̎O��DxLib_Init()�̑O�ɏ���
	DxLib::SetMainWindowText(_T("2016182_��{����"));
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

// ������̈���
// �����R�[�h�́A���{���\���ɂ�
// SJIS. EUC-JP, UTF-8, Unicode �Ȃǂ�����

// SetWindowText("")