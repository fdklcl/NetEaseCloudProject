#ifndef MUSICWORLDSWIDGET_H
#define MUSICWORLDSWIDGET_H

#include <QWidget>
#include <QGraphicsObject>

namespace Ui {
class MusicWorldsWidget;
}

class MusicWorldsWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MusicWorldsWidget(QWidget *parent = nullptr);
    ~MusicWorldsWidget();

private:
    Ui::MusicWorldsWidget *ui;
};

#endif // MUSICWORLDSWIDGET_H
