#include "allmain.h"
#include "loadfileqss.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QString cur_path = QCoreApplication::applicationDirPath();
    QString cur_app_name = QCoreApplication::applicationName();
    QString qss_file_path = cur_path + "/../../../../" + cur_app_name + "/bin/Allthe.qss";
    LoadFileQss::setStyle(qss_file_path); //加载qss 样式表，用静态方式
    AllMain w;
    w.show();

    return a.exec();
}
