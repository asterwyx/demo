#pragma once

#include <QWidget>

class MainWindow : public QWidget
{
    Q_OBJECT
public:
    MainWindow();
protected:
    void showEvent(QShowEvent *event) override;
    void paintEvent(QPaintEvent *event) override;
private:
    QImage m_image;
};
