#include "testdialog.h"
#include "ui_testdialog.h"
#include<QPushButton>
TestDialog::TestDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TestDialog)
{
    ui->setupUi(this);
    Button1=new QPushButton(tr("字体"));
    Button2=new QPushButton(tr("大小"));
    Button3=new QPushButton(tr("消息记录"));

    //从左到右水平布局
    QHBoxLayout *toolLayout=new QHBoxLayout;
    toolLayout->addWidget(Button1);
    toolLayout->addWidget(Button2);
    toolLayout->addStretch();//作用平均分配Layout
    toolLayout->addWidget(Button3);

    Button4=new QPushButton(tr("关闭"));
    Button5=new QPushButton(tr("发送"));
    QHBoxLayout *buttomLayout=new QHBoxLayout;
    buttomLayout->addStretch();
    buttomLayout->addWidget(Button4);
    buttomLayout->addWidget(Button5);

    Edit1=new QTextEdit;
    Edit2=new QTextEdit;
    Edit2->setMaximumHeight(90);//最大高度90
    QVBoxLayout *leftlayout=new QVBoxLayout;
    leftlayout->addWidget(Edit1);//addWidget： 加入控件
    leftlayout->addLayout(toolLayout);//addLayout: 加入已经布局好了的容器
    leftlayout->addWidget(Edit2);
    leftlayout->addLayout(buttomLayout);

    Edit3=new QTextEdit;
    Edit3->setMaximumWidth(100);//最大宽度100
    QVBoxLayout *rightlayout=new QVBoxLayout;//从上到下布局
    rightlayout->addWidget(Edit3);

    QHBoxLayout *toplayout=new QHBoxLayout;
    toplayout->addLayout(leftlayout);
    toplayout->addLayout(rightlayout);

    QHBoxLayout *mainLayout=new QHBoxLayout;
    mainLayout->addLayout(toplayout);
    setLayout(mainLayout);//将所有mianLayout设置为当前的窗体
}

TestDialog::~TestDialog()
{
    delete ui;
}
