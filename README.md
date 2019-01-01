# Symbol Graphics class
Class for works with WIN API output ASCII graphics

## ��������
����� ��������� �������� � ������� Windows (cmd.exe) ����������� ��������� � ����� � ��������� ����� � ���������.

## ��������� ������
* init_graphics()
	��������� ������ �� ������ ������� ������� ������ ��������� ������ (�� ��������� � Windows ��� 80�25), ������� ������.
* init_graphics(int WIDTH, int HEIGHT)
	��������� ������ �� ������ ������� WIDTH � HEIGHT, ������� ������.

## ��������� ����� ��� �������� � ����
� ������ ������� ������� ������. � �������� FColor � BColor ����� ������������ ��������� �����:
- Color_Black
- Color_Gray 
- Color_White 
- Color_RedDark
- Color_GreenDark
- Color_BlueDark
- Color_Red 
- Color_Green
- Color_Blue 
- Color_Yellow
- Color_YellowDark
- Color_Pink 
- Color_PinkDark
- Color_Aqua 
- Color_AquaDark

� ������ �������� ������ ������������ � �������������� �����.
����� ������������� ���� ������� � ���� ���� ��� �������.

��� ���������� �������������� ����� ��������� ������� ����� ���� � ������ ������ ���� ��� ����������� �����������.

���� ������� ��������� �������� drawOrthogonalLine(), drawOneSymb(), drawOrthogonalRectangle(), drawCentreText(), drawLeftText(), drawFill() ���������� ������ �������� � ��������� �����. ��� ����������� �������(������) �� ����� ����� ������� ����� ShowBuffer(), ��� ��� ������ ����� �� ���������, ��� ������� ����� ��������������� ������� clearBuffer(). � ������� ����� ����� �������� � ���������� ������ ������� (�������� ������) � �������� �� �� �������������.
����� clearBuffer() �� ������� �����, � ������� �����, ��� ������ ���������� ������ �� ����� ����� ����� ��������������� ������� clearBuffer() � ShowBuffer().

## ������� ������ �������������

#include <GraphicsCore.h>
#include <ctime>
#include <stdio.h>

int main()
{
	GraphicsCore GCore;
	GCore.init_graphics(80, 40);
	GCore.drawOneSymb(point{10,10}, 'X', Color_Green, Color_Black);
	GCore.drawOrthogonalRectangle(point{5,29}, point{35,31}, Color_Red, Color_Black);
	GCore.ShowBuffer();
	while (1){
		
	}
	return 0;
}

## ���������
���������� "CodeBlocks 16.01 with minGW". ��������� ���� ����������� (���������� � ����� ��� �������� � ������� ��������) � ������� ���� ������� � CodeBlocks.
���� ��������� ������������ ���������� �� ������ IDE - ������� ���������� ������ � ����������� � ����� ��� ��������� main.cpp 2 ����� ������ - GraphicsCore.cpp, GraphicsCore.h. � ����� main.cpp ����� �������� ������� �� ������� � �������������� ������.