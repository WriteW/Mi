#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <ctime>
#include <conio.h>
#include <Windows.h>
#include <windows.h>
#include <string.h>
#include <mmsystem.h>
#pragma comment(lib, "Winmm.lib")

void run();

void init();
void start();
void stop();

void play_song_music_1();
void play_song_music_2();

static std::string userName;
static std::string TempAnswer;
//第一次地选择，如选进为1，如选不进为2.
static int one;
void play_song_music_1()
{
    PlaySound(TEXT("music/music_01.wav"), NULL, SND_ASYNC | SND_NODEFAULT);
}
void play_song_music_2()
{
    PlaySound(TEXT("music/music_02.wav"), NULL, SND_ASYNC | SND_NODEFAULT);
}
void run()
{
    init();
    start();
    stop();
}
void init()
{
    system("color F0");
}
void start()
{
    std::cout << "\n\n\n\n------------" << std::endl;
    std::cout << "-    谜    -" << std::endl;
    std::cout << "------------" << std::endl;
    std::cout << "请输入您的用户名：" << std::endl;
    std::cin >> userName;
    std::cout << "你好," << userName << "！" << std::endl;
    Sleep(1000);
    system("cls");
    system("color 04");
    std::cout << "你是一个大学生！" << std::endl;
    Sleep(500);
    std::cout << "\t[今天要去学校做实验，你来到了实验楼....]" << std::endl;
    Sleep(500);
    std::cout << "\t[实验楼今天很奇怪，一个人也没有！]" << std::endl;
    Sleep(1000);
    std::cout << "\t[忽然响起了音乐.....]" << std::endl;
    // PlaySound(TEXT("music/music_01.wav"),NULL, SND_ASYNC|SND_NODEFAULT);
    play_song_music_1();
    Sleep(1000);
    std::cout << "\t[你走进了实验楼内部,那似乎没有一点光.....]" << std::endl;
    Sleep(500);
    std::cout << "\t[你走着走着......]" << std::endl;
    Sleep(1500);
    std::cout << "\t[忽然！]" << std::endl;
    // PlaySound(TEXT("music/music_02.wav"),NULL, SND_ASYNC|SND_NODEFAULT);
    play_song_music_2();
    std::cout << "\t[前面的教室发出的声音打断了音乐....]" << std::endl;
    Sleep(500);
    std::cout << "\t[要不要进去教室看看呢(去，不去)？]\n\tAnswer:";
    Sleep(500);
ForCinError:
    std::cin >> TempAnswer;
    if (TempAnswer == "去")
    {
        one = 1;
        std::cout << "\t[你走了进去...]" << std::endl;
        Sleep(500);
        std::cout << "\t[你只看到了一个乐器在弹奏着，但没有人在弹它，你感到很害怕...]" << std::endl;
        Sleep(3000);
        std::cout << "\t[你发现那是最近在电视上出现的一种自动乐器....]" << std::endl;
        Sleep(1900);
        std::cout << "\t[你走出了教室...]" << std::endl;
        Sleep(1200);
        std::cout << "\t[你撞见了一个人...]" << std::endl;
        Sleep(1000);
        system("color 09");
        std::cout << "\t[他叫小林，是这个学校的小学生]" << std::endl;
        std::cout << "\t继续.....";
        getch();
        std::cout << "\n";
        std::cout << "\t小林：“你好，我**地迷路了，你**地能带我出去吗！？”" << std::endl;
        Sleep(1289);
        std::cout << "\t[你觉得他很没礼貌，就不理他，往前面地楼梯走了...]" << std::endl;
        system("color");
    }
    else if (TempAnswer == "不去")
    {
        one = 2;
        std::cout << "\t[你经过了那个教室.....]" << std::endl;
        Sleep(1000);
        std::cout << "\t[你听到了脚步声,那个脚步声似乎是在前面地楼梯，你不由自主地躲了起来....]" << std::endl;
        Sleep(2000);
        std::cout << "\t[那个音乐又响了起来....]" << std::endl;
        play_song_music_1();
        Sleep(5000);
    }
    else
    {
        std::cout << "请输入去或不去！！！" << std::endl;
        std::cout << "\n\t[要不要进去教室看看呢(去，不去)？]\n\tAnswer:";
        goto ForCinError;
    }
    //==================循环结束=======================
    std::cout << "\t[你向前走去,想找到出口....]" << std::endl;
    Sleep(500);
    if (one == 1)
    {
        std::cout << "\t[你想起了那个小男孩,回头看了看，没有发现....]" << std::endl;

    }
    else
    {
        std::cout << "\t[你往楼梯下看去，又往楼梯上望去，并没有发现发出x(代指发出脚步声地人)....]" << std::endl;
    }
    std::cout << "\t[你往楼梯下走去....]" << std::endl;
    Sleep(1000);
    std::cout << "\t[你飞速跑出了学校...]" << std::endl;
    Sleep(3000);
    system("color 22");
}
void stop()
{
    system("pause");
}
int main(int argc, char const *argv[])
{
    run();
    return 0;
}
