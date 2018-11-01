#include <stdio.h>
#include <windows.h>
#include "DxLib.h"


enum BordState{
	NONE = -1,
	BLACK = 0,
	WHITE = 1,
	BLANK = 2
};

enum Player{
	ONE = 0,
	TWO = 1
};

enum ChipSurround{
	UPPER_LEFT = 0,
	UPPER_MIDDLE = 1,
	UPPER_RIGHT = 2,
	LEFT = 3,
	RIGHT = 4,
	DOWN_LEFT = 5,
	DOWN_MIDDLE = 6,
	DOWN_RIGHT = 7
};

struct Bord{
	int *xBordSize;
	int *yBordSize;
	char image[10];
	BordState bordStatu;
};

int FieldBord(Bord bord[9][9], int &oneBordSize, char image[10]){
	for(int i = 0; i < 9; i++){
		for(int k = 0; k < 9; k++){
			bord[i][k] = {&oneBordSize, &oneBordSize, image[10]}, BLANK;
		}
	}
}

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int){
	DxLib_Init();   // DXライブラリ初期化処理


	WaitKey();      // キー入力待ち
	DxLib_End();    // DXライブラリ終了処理
	return 0;
}