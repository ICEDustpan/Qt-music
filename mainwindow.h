#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_bt_music_play_clicked();

    void on_bt_music_stop_clicked();

    void on_bt_music_quit_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
