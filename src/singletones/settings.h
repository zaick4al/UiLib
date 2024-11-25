#ifndef SETTINGS_H
#define SETTINGS_H

#include <QObject>
#include <QQmlEngine>

namespace UiLib {

class Common : public QObject{
    Q_OBJECT
    Q_PROPERTY(qreal spacing READ spacing WRITE setSpacing NOTIFY spacingChanged FINAL)
    Q_PROPERTY(qreal height READ height WRITE setHeight NOTIFY heightChanged FINAL)
    Q_PROPERTY(qreal width READ width WRITE setWidth NOTIFY widthChanged FINAL)
    Q_PROPERTY(qreal radius READ radius WRITE setRadius NOTIFY radiusChanged FINAL)
public:
    explicit Common(QObject *parent = nullptr);

    qreal spacing() const;
    void setSpacing(qreal newSpacing);

    qreal height() const;
    void setHeight(qreal newStandartHeight);

    qreal width() const;
    void setWidth(qreal newStandartWidth);

    qreal radius() const;
    void setRadius(qreal newStandartRadius);

signals:
    void spacingChanged();
    void heightChanged();
    void widthChanged();
    void radiusChanged();

private:
    qreal m_spacing;
    qreal m_height;
    qreal m_width;
    qreal m_radius;
};

class Settings : public QObject
{
    Q_OBJECT
    QML_ELEMENT
    QML_SINGLETON
    Q_PROPERTY(Common *common READ common WRITE setCommon NOTIFY commonChanged FINAL)
public:
    explicit Settings(QObject *parent = nullptr);

    static Settings &instance();
    Common *common() const;
    void setCommon(Common *newCommon);

signals:
    void commonChanged();
private:
    Common *m_common = nullptr;
};

} // namespace UiLib

#endif // SETTINGS_H
