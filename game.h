#ifndef GAME_H
#define GAME_H
class Game
{
public:
	Game() : speed(100), key(1), score(0) {};
	void Start();
	void Select();
	void Draw();
	int Play();
	void GameLoop();
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
#endif