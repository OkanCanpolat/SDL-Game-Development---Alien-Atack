#pragma once
#include "GameObject.h"
#include <vector>
#include "MenuState.h"

class PauseState
	: public MenuState
{
public:
	virtual void update();
	virtual void render();
	virtual bool onEnter();
	virtual bool onExit();
	virtual std::string getStateID() const { return s_pauseID; }
	virtual void setCallbacks(const std::vector<Callback>& callbacks);

private:
	static void s_pauseToMain();
	static void s_resumePlay();
	static const std::string s_pauseID;
	std::vector<GameObject*> m_gameObjects;
};
