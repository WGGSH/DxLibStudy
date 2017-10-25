#include "DxLib.h"

// Win Main 関数
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	// DxLibの初期化処理
	// ここでウィンドウが生成される
	if (DxLib_Init() == -1)		
	{
		return -1;			
	}

	// DrawPixel(320, 240, GetColor(255, 255, 255));  // 見辛い
	
	// 画面の真ん中に白色で半径50の円を描く
	DxLib::DrawCircle(320, 240, 50, GetColor(255, 255, 255));

	// キー入力を待機
	WaitKey();	

	// DxLibの終了処理
	DxLib_End();

	return 0;	
}
