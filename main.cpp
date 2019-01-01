#include <iostream>
#include <GraphicsCore.h>

#include <vector>
#include <ctime>
#include <sstream>
#include <stdio.h>

using namespace std;

/// User-defined functions to display his pieces.
/// ���������������� ������� ��� ����������� ����� �����.
void drawPlayer(GraphicsCore core, int x, int y){
    core.drawOneSymb(point{x,y}, '*', Color_Red, Color_Black);
    core.drawOneSymb(point{x-1,y}, '*', Color_Red, Color_Black);
    core.drawOneSymb(point{x-2,y}, '*', Color_Red, Color_Black);
    core.drawOneSymb(point{x+1,y}, '*', Color_Red, Color_Black);
    core.drawOneSymb(point{x+2,y}, '*', Color_Red, Color_Black);
    core.drawOneSymb(point{x,y+1}, '*', Color_Red, Color_Black);
    core.drawOneSymb(point{x,y+2}, '*', Color_Red, Color_Black);
    core.drawOneSymb(point{x+1,y+2}, '*', Color_Red, Color_Black);
    core.drawOneSymb(point{x+1,y+3}, '*', Color_Red, Color_Black);
    core.drawOneSymb(point{x+1,y+4}, '*', Color_Red, Color_Black);
    core.drawOneSymb(point{x-1,y+2}, '*', Color_Red, Color_Black);
    core.drawOneSymb(point{x-1,y+3}, '*', Color_Red, Color_Black);
    core.drawOneSymb(point{x-1,y+4}, '*', Color_Red, Color_Black);
    core.drawOneSymb(point{x,y-1}, '*', Color_Red, Color_Black);
    core.drawOneSymb(point{x,y-2}, '*', Color_Red, Color_Black);
    core.drawOneSymb(point{x-1,y-2}, '*', Color_Red, Color_Black);
    core.drawOneSymb(point{x+1,y-2}, '*', Color_Red, Color_Black);
    core.drawOneSymb(point{x-1,y-3}, '$', Color_Red, Color_Black);
    core.drawOneSymb(point{x+1,y-3}, '$', Color_Red, Color_Black);
    core.drawOneSymb(point{x,y-3}, '*', Color_Red, Color_Black);
}

void hidePlayer(GraphicsCore core, int x, int y){
    core.drawOneSymb(point{x,y}, ' ', Color_Red, Color_Black);
    core.drawOneSymb(point{x-1,y}, ' ', Color_Red, Color_Black);
    core.drawOneSymb(point{x-2,y}, ' ', Color_Red, Color_Black);
    core.drawOneSymb(point{x+1,y}, ' ', Color_Red, Color_Black);
    core.drawOneSymb(point{x+2,y}, ' ', Color_Red, Color_Black);
    core.drawOneSymb(point{x,y+1}, ' ', Color_Red, Color_Black);
    core.drawOneSymb(point{x,y+2}, ' ', Color_Red, Color_Black);
    core.drawOneSymb(point{x+1,y+2}, ' ', Color_Red, Color_Black);
    core.drawOneSymb(point{x+1,y+3}, ' ', Color_Red, Color_Black);
    core.drawOneSymb(point{x+1,y+4}, ' ', Color_Red, Color_Black);
    core.drawOneSymb(point{x-1,y+2}, ' ', Color_Red, Color_Black);
    core.drawOneSymb(point{x-1,y+3}, ' ', Color_Red, Color_Black);
    core.drawOneSymb(point{x-1,y+4}, ' ', Color_Red, Color_Black);
    core.drawOneSymb(point{x,y-1}, ' ', Color_Red, Color_Black);
    core.drawOneSymb(point{x,y-2}, ' ', Color_Red, Color_Black);
    core.drawOneSymb(point{x-1,y-2}, ' ', Color_Red, Color_Black);
    core.drawOneSymb(point{x+1,y-2}, ' ', Color_Red, Color_Black);
    core.drawOneSymb(point{x-1,y-3}, ' ', Color_Red, Color_Black);
    core.drawOneSymb(point{x+1,y-3}, ' ', Color_Red, Color_Black);
    core.drawOneSymb(point{x,y-3}, ' ', Color_Red, Color_Black);
}

int main()
{
    GraphicsCore GCore;
    /// Initialization of the console window. The method is overloaded,
    ///     if no arguments are passed, then the window size is taken from the system.
    /// ������������� ���� �������. ����� ����������, ���� �� �������� ���������
    ///     �� ������ ���� ��������������� �� ��������� ������� �������.
    GCore.init_graphics(80, 40);

    /// An example of building a set of multi-colored lines through a cycle.
    ///     Entry GraphicsCore_Color (i) allows you to set the color from a number from 0 to 15.
    /// ������ ���������� ��������� ������������ ����� ����� ����. ������ GraphicsCore_Color(i)
    ///     ��������� ������������� ���� �� ����� �� 0 �� 15.
    for (int i=0;i<16;i++){
        GCore.drawOrthogonalLine(point{0,i}, point{7,i}, true, GraphicsCore_Color(i), Color_Black);
    }

    /// Building a vertical line. Only vertical or horizontal lines are available in the class.
    /// ���������� ������������ �����. � ������ �������� ������ ������������ ��� �������������� �����.
    GCore.drawOrthogonalLine(point{8,0}, point{8,16}, true, Color_Blue, Color_Black);

    /// When constructing a rectangle, it is important to specify the upper left corner and
    ///     lower right corner for correct display.
    /// ��� ���������� �������������� ����� ��������� ������� ����� ���� �
    ///     ������ ������ ���� ��� ����������� �����������.
    GCore.drawOrthogonalRectangle(point{30,12}, point{45,25}, Color_Green, Color_GreenDark);
    GCore.drawOrthogonalRectangle(point{35,5}, point{55,15}, Color_Blue, Color_Black);

    /// Simple output of the symbol table at the bottom of the screen.
    /// ������� ����� ����� ������� �������� � ������ ����� ������.
    for (int i=170;i<170+80;i++){
        GCore.drawOneSymb(point{i-170,39}, (char)i,Color_Green, Color_Black);
    }

    /// Demonstration of symbols to simulate the filling of 25%, 50%, 75% and 100%.
    /// ������������ �������� ��� �������� ���������� �� 25%, 50%, 75% � 100%.
    GCore.drawOneSymb(point{20,2}, (char)176,Color_Green, Color_Black);
    GCore.drawOneSymb(point{21,2}, (char)177,Color_Green, Color_Black);
    GCore.drawOneSymb(point{22,2}, (char)178,Color_Green, Color_Black);
    GCore.drawOneSymb(point{23,2}, (char)219,Color_Green, Color_Black);

    /// Examples with text output. Available output from the center of the specified point
    ///     or aligned to the left of the specified point. Frame and fill are displayed separately.
    /// ������� � ������� ������. �������� ����� �� ������ ��������� �����
    ///     ��� � ������������� �� ������ ���� �� ��������� �����.
    ///     ����� � ���������� ������������ ��������.
    GCore.drawOrthogonalRectangle(point{5,29}, point{35,31}, Color_Red, Color_Black);
    GCore.drawCentreText("test text", point{20,30}, Color_Red, Color_Black);
    GCore.drawOrthogonalRectangle(point{5,33}, point{35,35}, Color_BlueDark, Color_Black);
    GCore.drawLeftText("test text2", point{6,34}, Color_BlueDark, Color_Black);

    GCore.drawFill(point{40,33}, point{55,35}, Color_GreenDark);
    GCore.drawOrthogonalRectangle(point{40,33}, point{55,35}, Color_Green, Color_GreenDark);
    GCore.drawCentreText("TEST", point{48,34}, Color_Green, Color_GreenDark);

    /// When calling drawing methods write to the buffer. To display the buffer on the screen,
    ///     you need to call the ShowBuffer () method, when you call it, the buffer is not cleared,
    ///     to clear it, use the clearBuffer () method.
    /// ��� ������ ������� ��������� ������������ ������ � �����. ��� ����������� ������ �� �����
    ///     ����� ������� ����� ShowBuffer(), ��� ��� ������ ����� �� ���������, ��� �������
    ///     ����� ��������������� ������� clearBuffer().
    GCore.ShowBuffer();

    /// Initialization of the current time (in milliseconds) and timer (current time + time to trigger).
    /// ������������� �������� ������� (� �������������) � ������� (������� ����� + ����� �� ������������).
    int realTimer=clock() / (CLOCKS_PER_SEC/1000);
    int timer = realTimer + 3000;

    /// Delay for the user to see the initial demo screen.
    /// �������� ����� ������������ ����� ������� ��������� ����-�����.
    while (realTimer<timer){
        realTimer=clock() / (CLOCKS_PER_SEC/1000);
    }

    /// Clearing the buffer, while the screen is not cleared.
    /// ������� ������, ��� ���� ����� �� ���������.
    GCore.clearBuffer();

    GCore.drawOrthogonalRectangle(point{5,29}, point{35,31}, Color_Red, Color_Black);
    GCore.drawCentreText("Press arrows for moving", point{20,30}, Color_Red, Color_Black);

    char buff[20];
    int x=10;
    int y=10;
    GraphicsCore_Color NowColorRect = Color_Red;
    /// In this example of dynamic display, the all buffer is not overwritten.
    ///     Only certain places are overwritten with hidePlayer () and drawFill ().
    /// � ���� ������� ������������� ����������� ���� ������ �� ����������.
    ///     ���������� ������ ��������� ����� � ������� hidePlayer() � drawFill().
    while (1){
        /// Actions are triggered in an infinite loop. When you press the keys, the coordinates change.
        /// �������� ������������� � ����������� �����. ��� ������� ������ ���������� ��������� ���������.
        if (GetAsyncKeyState(VK_ESCAPE)&0x8000!=0) return 0;
        hidePlayer(GCore, x, y);
        if (GetAsyncKeyState(VK_UP)&0x8000!=0) y--;
        if (GetAsyncKeyState(VK_DOWN)&0x8000!=0) y++;
        if (GetAsyncKeyState(VK_LEFT)&0x8000!=0) x--;
        if (GetAsyncKeyState(VK_RIGHT)&0x8000!=0) x++;
        drawPlayer(GCore, x, y);

        /// Displays the current time in the right corner of the screen.
        ///     And the time to trigger the timer. To do this, the field for its output
        ///     is pre-cleared to wipe the old numbers.
        /// ����������� �������� ������� � ������ ���� ������.
        ///     � ������� �� ������������ �������. ��� ����� ���� ��� ��� ������
        ///     �������������� ���������, ����� �������� ������ �����.
        realTimer=clock() / (CLOCKS_PER_SEC/1000);
        sprintf(buff, "%d ms", realTimer);
        GCore.drawOrthogonalRectangle(point{60,0}, point{79,2}, Color_Green, Color_Black);
        GCore.drawCentreText(buff, point{70,1}, Color_Green, Color_Black);
        sprintf(buff, "%d ms", timer-realTimer);
        GCore.drawFill(point{60,3}, point{79,5}, Color_Black);
        GCore.drawOrthogonalRectangle(point{60,3}, point{79,5}, Color_Green, Color_Black);
        GCore.drawCentreText(buff, point{70,4}, Color_Green, Color_Black);

        /// The rectangle draws a frame with no internal space,
        ///     for cleaning or setting it you need to use drawFill.
        /// ������������� ������ ����� ��� ����������� ������������,
        ///     ��� ������� ��� ������� ��� ����� ������������ drawFill.
        if (realTimer>=timer){
            timer = realTimer + 1000;
            GCore.drawFill(point{5,5}, point{10,10}, NowColorRect);
            GCore.drawOrthogonalRectangle(point{5,5}, point{10,10}, NowColorRect, NowColorRect);
            NowColorRect = GraphicsCore_Color(rand()%16);
        }

        GCore.ShowBuffer();
    }

    return 0;
}
