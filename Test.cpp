#include<iostream>

using namespace std;

// ��������� ��������� ����� ������
enum CellState { Empty, Deck, Miss, HitDeck };
// ��������� ��������� �������
enum ShipState { Destroyed, ShipHit, Safe };

// ����� - ������ �������� ����
class GameBoardCell {
private:
	int _x, _y;         // ���������� ������
	CellState _state;   // ��������� ������
public:
	GameBoardCell(int x = 0, int y = 0, CellState state = Empty)
	{
		_x = x;
		_y = y;
		_state = state;
	}

	// ������� ������������� x-��������� �����
	void SetX(int x)
	{
		_x = x;
	}

	void SetY(int y)
	{
		_y = y;
	}
	
}