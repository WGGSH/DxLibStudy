#include "DxLib.h"

// Win Main 関数
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	// DxLibの初期化処理
	// ここでウィンドウが生成される
	if (DxLib::DxLib_Init() == -1)
	{
		return -1;			
	}

	// 描画画面を裏に指定する
	DxLib::SetDrawScreen(DX_SCREEN_BACK);

	while (true) {
		// プロセス処理
		if (DxLib::ProcessMessage() == -1)break;

		// ウィンドウに表示されている内容を削除する
		DxLib::ClearDrawScreen();

		// メイン処理


		// 描画内容をウィンドウに反映させる
		DxLib::ScreenFlip();
	}


	// DxLibの終了処理
	DxLib::DxLib_End();

	return 0;	
}