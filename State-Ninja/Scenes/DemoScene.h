#pragma once

#include <math.h>
#include <vector>
#include <d3dx9.h>
#include <d3d9.h>

#include "../GameComponents/Scene.h"
#include "../GameComponents/Sprite.h"
#include "../GameComponents/Animation.h"
#include "../GameObjects/Player/Player.h"

class DemoScene : public Scene
{
public:
    DemoScene();

    void Update(float dt);
    void LoadContent();
    void Draw();

    void OnKeyDown(int keyCode);
	int IsKeyDown(int keyCode);
    void OnKeyUp(int keyCode);
  

protected:
   
    Player *mPlayer;

    float mTimeCounter;

   // std::map<int, bool> keys;
};

