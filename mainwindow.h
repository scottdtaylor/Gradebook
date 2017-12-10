#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}



class MainWindow : public QMainWindow
{
    Q_OBJECT
//test
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
signals:
    void newvalue(int value);
public slots:
   void customslot(int value);
   void changegrade();

private:
    Ui::MainWindow *ui;
   std::vector<int> HW;
   std::vector<int> Midterms;
   int Final;
   std::string Scheme;
   std::string Class;


};

#endif // MAINWINDOW_H
