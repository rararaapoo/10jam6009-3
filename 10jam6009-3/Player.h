#pragma once

enum MapInfo {
	YUKA,//0
	BLOCK,//1
	THORN,//2
	BLOCK2,//3
	GOAL,//4
	SYRUP,//5
	CANDY,//6
	CARAMEL,//7
};

class Player
{
public:
	void Initialize();

	void Update();

	void Draw();

	void Move(char* keys, char* preKeys, int map[]);

private:
	int playerPosX;
	int playerPosY;
	int playerR;
	int playerSpeed;

	int playerTmpX;
	int playerTmpY;
	int playerMapX;
	int playerMapY;


	//�^�C�}�[
	int goalTimer;//�S�[��
	int caramelTimer;//�J������
	int deathTimer;//�Q�[���I�[�o�[

	int playerDraw;
	const int KBlockSize = 32;
};