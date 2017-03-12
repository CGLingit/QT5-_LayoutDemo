#ifndef TESTDIALOG_H
#define TESTDIALOG_H

#include <QDialog>
#include<QTextEdit>
#include<QPushButton>
#include<QLayout>
namespace Ui {
class TestDialog;
}

class TestDialog : public QDialog
{
    Q_OBJECT

public:
    explicit TestDialog(QWidget *parent = 0);
    ~TestDialog();

private:
    Ui::TestDialog *ui;
    QTextEdit *Edit1;
    QTextEdit *Edit2;
    QTextEdit *Edit3;
    QPushButton *Button1;
    QPushButton *Button2;
    QPushButton *Button3;
    QPushButton *Button4;
    QPushButton *Button5;
};

#endif // TESTDIALOG_H
