#ifndef SETTINGS_H
#define SETTINGS_H

#include <QObject>
#include <QQmlEngine>

namespace UiLib {

class Common : public QObject{
    Q_OBJECT
    Q_PROPERTY(qreal spacing READ spacing WRITE setSpacing NOTIFY spacingChanged FINAL)
    Q_PROPERTY(qreal standartHeight READ standartHeight WRITE setStandartHeight NOTIFY standartHeightChanged FINAL)
    Q_PROPERTY(qreal standartWidth READ standartWidth WRITE setStandartWidth NOTIFY standartWidthChanged FINAL)
    Q_PROPERTY(qreal standartRadius READ standartRadius WRITE setStandartRadius NOTIFY standartRadiusChanged FINAL)
public:
    explicit Common(QObject *parent = nullptr);

    qreal spacing() const;
    void setSpacing(qreal newSpacing);

    qreal standartHeight() const;
    void setStandartHeight(qreal newStandartHeight);

    qreal standartWidth() const;
    void setStandartWidth(qreal newStandartWidth);

    qreal standartRadius() const;
    void setStandartRadius(qreal newStandartRadius);

signals:
    void spacingChanged();
    void standartHeightChanged();
    void standartWidthChanged();

    void standartRadiusChanged();

private:
    qreal m_spacing;
    qreal m_standartHeight;
    qreal m_standartWidth;
    qreal m_standartRadius;
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
