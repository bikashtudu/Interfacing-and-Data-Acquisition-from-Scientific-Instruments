#ifndef POWER_H
#define POWER_H

#include <QWidget>

namespace Ui {
class power;
}

class power : public QWidget
{
    Q_OBJECT

public:
    double setpoint;
    double pow150,pow200,pow250,pow300,pow350,pow400;
    explicit power(QWidget *parent = 0);
    ~power();


private slots:
    void on_p150_valueChanged(const QString &arg1);

    void on_p200_valueChanged(const QString &arg1);

    void on_p250_valueChanged(const QString &arg1);

    void on_p300_valueChanged(const QString &arg1);

    void on_p350_valueChanged(const QString &arg1);

    void on_p400_valueChanged(const QString &arg1);

private:
    Ui::power *ui;
};

#endif // POWER_H
