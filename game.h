#pragma once
class Game
{
public:
	Game() : speed(100), key(1), score(0) {};
	//void GameLoop();
	void Start();
	void Select();
	void Draw();
	int Play();
	int Menu();
	void SpeedUp();
	void UpdateScore(const int&);
	void RewriteScore();
	int GameOver();
private:
	int speed;
	int key;
	int score;
};