# Symbol Graphics class
Class for works with WIN API output ASCII graphics

## ��������
����� ��������� �������� � ������� Windows (cmd.exe) ����������� ��������� � ����� � ��������� ����� � ���������. ����� ������������� ���� ������� � ���� ���� ��� �������.
```
�������� �����: ���������� ������� windows �������� ���������� ��������� ����� ������������� ������� ������� ���������� ������� ������������� ���������� �����
keywords: ASCII grapchis windows cmd console
```

## ��������� ������
* init_graphics() 
> ��������� ������ �� ������ ������� ������� ������ ��������� ������ (�� ��������� � Windows ��� 80�25), ������� ������. ����� ����������� ������ ���� ������ �� ���������.
* init_graphics(int WIDTH, int HEIGHT)
> ��������� ������ �� ������ ������� WIDTH � HEIGHT, ������� ������. ����� ����������� ������ ���� ������ �� ���������.
* ShowBuffer()
> ����������� ������ �� ����� (��� ������� ������ ������ ����� �������� � �������� ������). �� ������� ����� ������, ������ �������� ����� ������ � ����� ������ �������.
* clearBuffer()
> ������� ������ �� �������� � �����, ��������� ����� ��������� � ������ ������ ����.
* int get_WIDTH_SCREEN() � int get_HEIGHT_SCREEN()
> ���������� ������� ������. � ������ ���� ����� ���� � ������ init_graphics() �� ���� �������� ��������� ������� ������, ��������� ������ ������� ������ ������ �� ���������.
* drawOneSymb(point pos, char symb, GraphicsCore_Color FColor, GraphicsCore_Color BColor)
> ������� � �������� ������� ������ **pos** �������� ������ **symb** � ������ ������� **FColor** � ������ ���� **BColor**. ������ *ObjName.drawOneSymb(point{20,2}, 's',Color_Green, Color_Black)*
* drawOrthogonalLine(point start, point stop, bool flagColoredStart, GraphicsCore_Color FColor, GraphicsCore_Color BColor)
> ������� ����� � ������� ������������� "- �" ������� � ��������� **start** � ���������� ������������ **stop** � ������ ����� **FColor** � ������ ���� **BColor**. ���� **flagColoredStart** ������ �� ����� �������� ������� ���������� ����������. ������ ������������ ��� �������������� ����� � ����������� �� ���������. �� ������ ����� ��� start.x != stop.x && start.y != stop.y.
* drawOrthogonalRectangle(point lt, point rb, GraphicsCore_Color FColor, GraphicsCore_Color BColor)
> ������� ������������� � ������� ������������� "-�L-�-" ������� � ������ �������� ���� **lt** � ���������� ������ ������ ����� **rb** ������������ � ������ ����� **FColor** � ������ ���� **BColor**. ��� ���������� �������������� ����� ��������� ������� ����� ���� � ������ ������ ���� ��� ����������� �����������. ��� ������ �������������� �� ��������� � �� ������������� ��������� ������������ ��������������, ��� ��� ��������� ������������ drawFill().
* drawFill(point lt, point rb, GraphicsCore_Color BColor)
> ��������� ������� ������� � ������ �������� ���� **lt** � ���������� ������ ������ ����� **rb** ������������ ��������� ������ ������� � ������ ���� **BColor**.
* drawCentreText(std::string text, point center, GraphicsCore_Color FColor, GraphicsCore_Color BColor)
* drawLeftText(std::string text, point left, GraphicsCore_Color FColor, GraphicsCore_Color BColor)

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


���� ������� ��������� �������� drawOrthogonalLine(), drawOneSymb(), drawOrthogonalRectangle(), drawCentreText(), drawLeftText(), drawFill() ���������� ������ �������� � ��������� �����. ��� ����������� �������(������) �� ����� ����� ������� ����� ShowBuffer(), ��� ��� ������ ����� �� ���������, ��� ������� ����� ��������������� ������� clearBuffer(). � ������� ����� ����� �������� � ���������� ������ ������� (�������� ������) � �������� �� �� �������������.
����� clearBuffer() �� ������� �����, � ������� �����, ��� ������ ���������� ������ �� ����� ����� ����� ��������������� ������� clearBuffer() � ShowBuffer().

��� �������� ������� ������ 40�40 ����� ������ ������ ���� ����� ����� ���������� 39�39.

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