#include<iostream>

using namespace std;

// множество состояний одной клетки
enum CellState { Empty, Deck, Miss, HitDeck };
// множество состояний корабля
enum ShipState { Destroyed, ShipHit, Safe };

// класс - клетка игрового поля
class GameBoardCell {
private:
	int _x, _y;         // координаты клетки
	CellState _state;   // состояние клетки
public:
	GameBoardCell(int x = 0, int y = 0, CellState state = Empty)
	{
		_x = x;
		_y = y;
		_state = state;
	}

	// функция устанавливает x-кординату клети
	void SetX(int x)
	{
		_x = x;
	}

	void SetY(int y)
	{
		_y = y;
	}
	
}