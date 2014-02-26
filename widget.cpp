#include "widget.h"
#include "func.h"



Widget::Widget(QWidget *parent) : QWidget(parent)
{
    setUI();

    connect(start, SIGNAL(clicked()), this, SLOT(startAlgorithm()));
}

Widget::~Widget()
{

}

void Widget::setUI() {
    srcLabel = new QLabel;
    srcImage = new QImage("E:/Yun/proj/qt/hp-sift/lena.tif");
    srcLabel->setPixmap(QPixmap::fromImage(*srcImage));
    outLabel = new QLabel;
    outImage = new QImage(*srcImage);
    outLabel->setPixmap(QPixmap::fromImage(*outImage));

    QHBoxLayout* hLay1 = new QHBoxLayout;
    hLay1->addWidget(srcLabel);
    hLay1->addWidget(outLabel);

    start = new QPushButton("Start");
    timeConsume = new QLineEdit();
    QLabel* timeUnit = new QLabel("ms");

    QHBoxLayout* hLay2 = new QHBoxLayout;
    hLay2->addWidget(start);
    hLay2->addWidget(timeConsume);
    hLay2->addWidget(timeUnit);

    QVBoxLayout* vLay = new QVBoxLayout;
    vLay->addLayout(hLay1);
    vLay->addLayout(hLay2);

    setLayout(vLay);
    setAttribute(Qt::WA_DeleteOnClose);
}

void Widget::startAlgorithm() {

}



















