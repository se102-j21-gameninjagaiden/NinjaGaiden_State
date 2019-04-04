#include "DemoScene.h"

DemoScene::DemoScene()
{
    LoadContent();
}

void DemoScene::LoadContent()
{
    //set mau backcolor cho scene o day la mau xanh
    mBackColor = 0x54acd2;


    mPlayer = new Player();
    mPlayer->SetPosition(GameGlobal::GetWidth() / 2, GameGlobal::GetHeight() / 2);
}

void DemoScene::Update(float dt)
{
   // mPlayer->HandleKeyboard(keys);
	if (IsKeyDown(DIK_SPACE) )
	{
		mPlayer->OnKeyPressed(DIK_SPACE);
	}
	if (IsKeyDown(DIK_Z))
	{
		mPlayer->OnKeyPressed(DIK_Z);
	}
	mPlayer->HandleKeyboard();
    mPlayer->Update(dt);
}

void DemoScene::Draw()
{
    mPlayer->Draw();
}

void DemoScene::OnKeyDown(int keyCode)
{

   // keys[keyCode] = true;

   
}

int DemoScene::IsKeyDown(int keyCode)
{
	return (GameGlobal::GetCurrentKeyState()[keyCode] & 0x80) > 0;
}



void DemoScene::OnKeyUp(int keyCode)
{
   // keys[keyCode] = false;
}

