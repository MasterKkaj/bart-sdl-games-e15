#include <iostream>
#include "Engine.h"
#include "Sprite.h"

int main(int argc, char* args[])
{
	Engine::GetInstance()->Init(224, 256);
	Engine::GetInstance()->Start();
	//
	Engine::GetInstance()->Stop();
	Engine::GetInstance()->Kill();
	return 0;
}



