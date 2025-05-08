#include "mainwindow.h"
#include <QPainter>
#include <QPaintEvent>
#include <QTimer>
MainWindow::MainWindow()
    : QWidget()    
    , m_image(":/caption.jpg")
{
}

void MainWindow::showEvent(QShowEvent *event)
{
    QWidget::showEvent(event);
    QTimer::singleShot(100, this, [this]() {
        resize(m_image.size());
    });
}

void MainWindow::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.drawImage(rect(), m_image);
    QWidget::paintEvent(event);
}
