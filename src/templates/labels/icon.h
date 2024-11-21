#ifndef ICON_H
#define ICON_H

#include <QQmlEngine>
#include "control.h"

namespace UiLib {

class Icon : public UiLib::Control
{
    Q_OBJECT
    QML_ELEMENT
    QML_NAMED_ELEMENT(IconTemplate)
    Q_PROPERTY(QUrl iconSource READ iconSource WRITE setIconSource NOTIFY iconSourceChanged FINAL)
    Q_PROPERTY(QColor color READ color WRITE setColor NOTIFY colorChanged FINAL)
public:
    Icon();

    static Icon *create(QQmlEngine *p_engine);

    QUrl iconSource() const;
    void setIconSource(const QUrl &newIconSource);
    QColor color() const;
    void setColor(const QColor &newColor);

signals:
    void iconSourceChanged();
    void colorChanged();

private:
    QUrl m_iconSource;
    QColor m_color;
};

} // namespace UiLib

#endif // ICON_H
