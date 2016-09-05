#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qDebug() << "Qt says \"hello  world!\"" << endl;
    return a.exec();
}
