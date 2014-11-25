#ifndef POPUP_H
#define POPUP_H

#include <QDialog>
#include <QDesktopWidget>
#include <QMouseEvent>

namespace Ui {
class Popup;
}

class Popup : public QDialog
{
    Q_OBJECT

public:
    explicit Popup(QWidget *parent = 0);
    ~Popup();

    void showPopup(QString title, QString description);
    void mousePressEvent(QMouseEvent*);

private slots:
    void closePopup();

signals:
    void closed();
    void clicked();

private:
    Ui::Popup *ui;
};

#endif // POPUP_H
