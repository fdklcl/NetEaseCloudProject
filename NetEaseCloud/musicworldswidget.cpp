#include "musicworldswidget.h"
#include "ui_musicworldswidget.h"

MusicWorldsWidget::MusicWorldsWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MusicWorldsWidget) {
    ui->setupUi(this);
    setAttribute(Qt::WA_StyledBackground); //设置样式表
    this->setStyleSheet("QWidget{border:1px; background:rgb(236,65,65); border-radius:8px;}"
                        "QWidget:hover{background:rgb(255,255,255);}");
}

MusicWorldsWidget::~MusicWorldsWidget() {
    delete ui;
}
