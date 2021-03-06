#ifndef GAMEPAGE_H
#define GAMEPAGE_H
#include <vector>

#include <glad/glad.h>
#include <glm/glm.hpp>

#include "gameObject.h"
#include "ResourceManager.h"
#include "RenderObj.h"

class GamePage
{
public:
	//page state equals level state?
	std::vector<GameObject> GameObjs;
	int PID;
	//constructor
	GamePage() { }
	//load page from file? not in progressing
	void Load(int page, unsigned int pageWidth, unsigned int pageHeight);
	void Update(int page);
	//render Page
	void Draw(SpriteRenderer& render);
	//check compiled
	bool IsCompleted();
private:
	//intialize 
	void init(std::vector<RenderObj> pageData, unsigned int pageWidth, unsigned int pageHeight);
};


#endif