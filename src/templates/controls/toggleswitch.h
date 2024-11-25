#ifndef TOGGLESWITCH_H
#define TOGGLESWITCH_H

#include <QQmlEngine>
#include <control.h>

namespace UiLib {

/**
 * @brief The ToggleSwitch class
 * @details Template for custom toggleswitch object
 */
class ToggleSwitch : public UiLib::Control
{
    Q_OBJECT
    QML_ELEMENT
    QML_NAMED_ELEMENT(ToggleSwitchTemplate)
    /**
     * @brief The checked property
     * @details Property that contains data about current toggleswitch state
     * @sa checked(), setChecked()
     */
    Q_PROPERTY(bool checked READ checked WRITE setChecked NOTIFY checkedChanged FINAL)
    /**
     * @brief The tooltipEnabled property
     * @details Property that is used to enable or disable custom tooltip
     * @sa tooltipEnabled(), setTooltipEnabled()
     */
    Q_PROPERTY(bool tooltipEnabled READ tooltipEnabled WRITE setTooltipEnabled NOTIFY tooltipEnabledChanged FINAL)
    /**
     * @brief The tooltipText property
     * @details Property that is used to set text inside of tooltip
     * @sa tooltipText(), setTooltipText()
     */
    Q_PROPERTY(QString tooltipText READ tooltipText WRITE setTooltipText NOTIFY tooltipTextChanged FINAL)
    /**
     * @brief The backgroundColor property
     * @details Property that is used to set background color of disabled toggleswitch
     * @sa backgroundColor(), setBackgroundColor()
     */
    Q_PROPERTY(QColor backgroundColor READ backgroundColor WRITE setBackgroundColor NOTIFY backgroundColorChanged FINAL)
    /**
     * @brief The handleColor property
     * @details Property that is used to set color of the handle
     * @sa handleColor(), setHandleColor()
     */
    Q_PROPERTY(QColor handleColor READ handleColor WRITE setHandleColor NOTIFY handleColorChanged FINAL)
    /**
     * @brief The borderColor property
     * @details Property that is used to set color of border of both handle and background
     * @sa borderColor(), setBorderColor()
     */
    Q_PROPERTY(QColor borderColor READ borderColor WRITE setBorderColor NOTIFY borderColorChanged FINAL)
    /**
     * @brief The infillColor property
     * @details Property that is used to set background color of enabled toggleswitch
     * @sa infillColor(), setInfillColor()
     */
    Q_PROPERTY(QColor infillColor READ infillColor WRITE setInfillColor NOTIFY infillColorChanged FINAL)
public:
    /**
     * @private
     */
    ToggleSwitch();

    /**
     * @brief create
     * @param QQmlEngine *p_engine
     * @details Static method for creating both visual and object instance of the object
     * @return ToggleSwitch *
     */
    static ToggleSwitch *create(QQmlEngine *p_engine);

    /**
     * @brief checked
     * @return const bool
     * @details Getter-method for current element state
     */
    bool checked() const;
    /**
     * @brief setChecked
     * @param bool p_checked
     * @details Setter-method to change current element state
     */
    void setChecked(bool p_checked);

    /**
     * @brief tooltipEnabled
     * @return const bool
     * @details Getter-method for state of tooltip
     */
    bool tooltipEnabled() const;
    /**
     * @brief setTooltipEnabled
     * @param bool p_tooltipEnabled
     * @details Setter-method to enable or disable tooltip
     */
    void setTooltipEnabled(bool p_tooltipEnabled);

    /**
     * @brief tooltipText
     * @return const QString
     * @details Getter-method for current text written in tooltip
     */
    QString tooltipText() const;
    /**
     * @brief setTooltipText
     * @param QString p_tooltipText
     * @details Setter-method to set tooltip text
     */
    void setTooltipText(const QString &p_tooltipText);

    /**
     * @brief backgroundColor
     * @return const QColor
     * @details Getter-method for current background color of unchecked toggleswitch
     */
    QColor backgroundColor() const;
    /**
     * @brief setBackgroundColor
     * @param QColor p_backgroundColor
     * @details Setter-method to set background color of unchecked toggleswitch
     */
    void setBackgroundColor(const QColor &p_backgroundColor);

    /**
     * @brief handleColor
     * @return const QColor
     * @details Getter-method for current handle color
     */
    QColor handleColor() const;
    /**
     * @brief setHandleColor
     * @param QColor p_handleColor
     * @details Setter-method for handle color
     */
    void setHandleColor(const QColor &p_handleColor);

    /**
     * @brief infillColor
     * @return const QColor
     * @details Getter-method for current background color of checked toggleswitch
     */
    QColor infillColor() const;
    /**
     * @brief setInfillColor
     * @param QColor p_infillColor
     * @details Setter-method to set background color of unchecked toggleswitch
     */
    void setInfillColor(const QColor &p_infillColor);

    /**
     * @brief borderColor
     * @return const QColor
     * @details Getter-method for current border color of toggleswitch
     */
    QColor borderColor() const;
    /**
     * @brief setBorderColor
     * @param QColor p_borderColor
     * @details Setter-method for border color of toggleswitch
     */
    void setBorderColor(const QColor &p_borderColor);

signals:
    /**
     * @brief checkedChanged
     * @details Signal notifying that state of toggleswitch has changed
     */
    void checkedChanged();
    /**
     * @brief backgroundColorChanged
     * @details Signal notifying that color of unchecked background has changed
     */
    void backgroundColorChanged();
    /**
     * @brief handleColorChanged
     * @details Signal notifying that color of the handle has changed
     */
    void handleColorChanged();
    /**
     * @brief infillColorChanged
     * @details Signal notifying that color of checked background has changed
     */
    void infillColorChanged();
    /**
     * @brief tooltipEnabledChanged
     * @details Signal notifying that tooltip is set to enabled or disabled
     */
    void tooltipEnabledChanged();
    /**
     * @brief borderColorChanged
     * @details Signal notifying that border color of handle and background changed
     */
    void borderColorChanged();
    /**
     * @brief tooltipTextChanged
     * @details Signal notifying that text of the tooltip has changed
     */
    void tooltipTextChanged();

private:
    /**
     * @private
     */
    bool m_checked;
    /**
     * @private
     */
    bool m_tooltipEnabled;
    /**
     * @private
     */
    QString m_tooltipText;
    /**
     * @private
     */
    QColor m_backgroundColor;
    /**
     * @private
     */
    QColor m_handleColor;
    /**
     * @private
     */
    QColor m_infillColor;
    /**
     * @private
     */
    QColor m_borderColor;
};

} // namespace UiLib

#endif // TOGGLESWITCH_H
