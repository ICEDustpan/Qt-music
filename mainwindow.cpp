#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QProcess"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_bt_music_play_clicked()
{
    //调用Linux命令使用mplayer播放音乐
    QProcess *play = new QProcess();
    play->start("mplayer /music/music.mp3" );
}

void MainWindow::on_bt_music_stop_clicked()
{
    //调用Linux命令 结束mplayer进程
    QProcess *play = new QProcess();
    play->start("killall mplayer " );

}

void MainWindow::on_bt_music_quit_clicked()
{
    //结束程序 退出窗口
    QApplication* app;
    app->quit();
}
