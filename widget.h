#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QtGui/QImage>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtGui/QPixmap>


class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();

    void setUI();

public slots:
    void startAlgorithm();

private:
    QLabel* srcLabel;
    QImage* srcImage;
    QLabel* outLabel;
    QImage* outImage;
    QPushButton* start;
    QLineEdit* timeConsume;

};

#endif // WIDGET_H
