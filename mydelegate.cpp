#include "mydelegate.h"
#include <QPainter>
#include <QPoint>
#include <QStyledItemDelegate>
#include <QImage>
MyDelegate::MyDelegate(QObject *parent)
    : QStyledItemDelegate{parent}
{}

void MyDelegate::paint(QPainter *painter, const QStyleOptionViewItem &option,
                       const QModelIndex &index) const {
    if (index.column() == 3) {
        painter->save();
        QPixmap pix;
        switch (index.data().toInt()) {
        case 1:
        {
            pix.load(":/images/cardio.jpg");
            QPixmap scaled = pix.scaled(100, 100, Qt::KeepAspectRatio, Qt::SmoothTransformation);
            painter->drawPixmap(option.rect, scaled);
            break;
        }
        case 2:
        {
            pix.load(":/images/cardio_2.jpg");
            QPixmap scaled = pix.scaled(100, 100, Qt::KeepAspectRatio, Qt::SmoothTransformation);
            painter->drawPixmap(option.rect, scaled);
            break;
        }
        case 3:
        {
            pix.load(":/images/cardio_3.jpg");
            QPixmap scaled = pix.scaled(100, 100, Qt::KeepAspectRatio, Qt::SmoothTransformation);
            painter->drawPixmap(option.rect, scaled);
            break;
        }
        }
        painter->restore();
        return;
    }

    QStyledItemDelegate::paint(painter, option, index);
}
QSize MyDelegate::sizeHint(const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    return QSize(100,50);
}
