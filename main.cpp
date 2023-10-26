#include <stdio.h>
#include <easyx.h>
#include <conio.h>
#include <Windows.h>
#include <mmsystem.h>
#include <time.h>
#pragma comment(lib,"Winmm.lib")
bool Over;
bool Win = false;
bool Lose = false;
bool exit = false;
int score = 0;
void set()
{
	Over = false;
	Win = false;
	Lose = false;
	score = 0;//分数
	srand(time(NULL));//播种



}
void drawgame()
{
	BeginBatchDraw();

}
int main(void)
{
	return 0;
}
