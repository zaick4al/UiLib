#ifndef TOGGLESWITCH_H
#define TOGGLESWITCH_H

#include <QQmlEngine>
#include <control.h>

namespace UiLib {

class ToggleSwitch : public UiLib::Control
{
    Q_OBJECT
    QML_ELEMENT
    QML_NAMED_ELEMENT(ToggleSwitchTemplate)
    Q_PROPERTY(bool checked READ checked WRITE setChecked NOTIFY checkedChanged FINAL)
    Q_PROPERTY(bool tooltipEnabled READ tooltipEnabled WRITE setTooltipEnabled NOTIFY tooltipEnabledChanged FINAL)
    Q_PROPERTY(QString tooltipText READ tooltipText WRITE setTooltipText NOTIFY tooltipTextChanged FINAL)
    Q_PROPERTY(QColor backgroundColor READ backgroundColor WRITE setBackgroundColor NOTIFY backgroundColorChanged FINAL)
    Q_PROPERTY(QColor handleColor READ handleColor WRITE setHandleColor NOTIFY handleColorChanged FINAL)
    Q_PROPERTY(QColor borderColor READ borderColor WRITE setBorderColor NOTIFY borderColorChanged FINAL)
    Q_PROPERTY(QColor infillColor READ infillColor WRITE setInfillColor NOTIFY infillColorChanged FINAL)
public:
    ToggleSwitch();
    bool checked() const;
    void setChecked(bool newChecked);

    bool tooltipEnabled() const;
    void setTooltipEnabled(bool newTooltipEnabled);

    QString tooltipText() const;
    void setTooltipText(const QString &newTooltipText);

    QColor backgroundColor() const;
    void setBackgroundColor(const QColor &newBackgroundColor);

    QColor handleColor() const;
    void setHandleColor(const QColor &newHandleColor);

    QColor infillColor() const;
    void setInfillColor(const QColor &newInfillColor);

    QColor borderColor() const;
    void setBorderColor(const QColor &newBorderColor);

signals:
    void checkedChanged();

    void backgroundColorChanged();

    void handleColorChanged();

    void infillColorChanged();

    void tooltipEnabledChanged();

    void borderColorChanged();

    void tooltipTextChanged();

private:
    bool m_checked;
    bool m_tooltipEnabled;
    QString m_tooltipText;
    QColor m_backgroundColor;
    QColor m_handleColor;
    QColor m_infillColor;
    QColor m_borderColor;
};

} // namespace UiLib

#endif // TOGGLESWITCH_H
