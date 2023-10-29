#include <stdio.h>
#include <easyx.h>
#include <conio.h>
#include <Windows.h>
#include <mmsystem.h>
#include <time.h>
#pragma comment(lib,"Winmm.lib")
IMAGE hammer;
bool Over;
bool Win = false;
bool Lose = false;
bool exit = false;
int score = 0;
int target;//设置目标分数
int missed;//成功逃离的地鼠个数
int max_missed;//最多可miss的地鼠数量
int life;//剩余生命
int m;//记录当前是哪个地鼠动
int speed;//地鼠的速度，难度设置
void set()
{
	Over = false;
	Win = false;
	Lose = false;
	score = 0;//分数
	srand(time(NULL));//播种,随机函数
	m = rand() % 9;
	missed = 0;
	life = max_missed;//显示剩余生命
}
void drawgame()
{
	BeginBatchDraw();//批量绘图函数


	EndBatchDraw();//结束批量绘制函数
}
void hammer()
{
	int x; int y;
	ExMessage msg;
	while (peekmessage(&msg))
	{
		if (peekmessage == WM_MOUSEMOVE)
		{
			x = msg.x;
			y = msg.y;
		}
	}

}
int main(void)
{

	return 0;
}
