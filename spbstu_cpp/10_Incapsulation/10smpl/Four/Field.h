#ifndef _FIELD_H
#define _FIELD_H

// ���� ��� ���� "4 � ���"

// ������ � ������ ����
const int FIELD_WIDTH = 7;
const int FIELD_HEIGHT = 6;
// ��� "������ ����"
enum Cell
{
   EMPTY,
   RED,
   YELLOW
};
class Field
{
   // ��������� ������ ��� �������� �������� ����
   Cell cells[FIELD_WIDTH][FIELD_HEIGHT];
   // ������� ����
   bool isRedTurn;
   // ��� �� ������ ������ �������
   Cell winner;

   // �������� ������� �������� ����������
   void checkWinner();
public:
   // �����������, ������� ����
   // isRedFirst - true, ���� ������� ����� �������
   Field(bool isRedFirst);
   // ������� ���� �� ����������
   // isRedFirst - true, 
   // ���� ����� ������� ������� ����� �������
   void clear(bool isRedFirst);
   // ��������� ���
   // column - ����� ������� ����, �� 1 �� 7
   // ��������� - true, ���� ��� ������� ������,
   // false � �������� ������
   bool makeTurn(int column); 
   // �������� �� ����
   // red - true, ���� ������ ��������� � �������� ������
   // ��������� - true, ���� ���� �������� ������ �������
   bool isWon(bool red) const;
   // �������� �� ����
   // ���� ��������, ���� ���-���� �������
   // ��� ���� ������ ��� ������
   bool isOver() const;
   // ������ � �������
   // i ����� ������� �� 1 �� 7
   // j ����� ������� �� 1 (������) �� 6 (�������)
   Cell getCell(int i, int j) const;
   // ����� �� ������� �����
   bool isRedTurnNow() const;
   // ���������� � �������
   void print() const;
   // ���������� ���������� � �������
   void printResult() const;
};

#endif