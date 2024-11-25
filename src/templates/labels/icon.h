#ifndef ICON_H
#define ICON_H

#include <QQmlEngine>
#include "control.h"

namespace UiLib {

/**
 * @brief The Icon class
 * @details Template for custom QML icon object with changeable colors
 */
class Icon : public UiLib::Control
{
    Q_OBJECT
    QML_ELEMENT
    QML_NAMED_ELEMENT(IconTemplate)
    /**
     * @brief The iconSource property
     * Property that contains url of the icon used
     * @sa iconSource(), setIconSource()
     */
    Q_PROPERTY(QUrl iconSource READ iconSource WRITE setIconSource NOTIFY iconSourceChanged FINAL)
    /**
     * @brief The color property
     * Property that contains color of the icon
     * @sa color(), setColor()
     */
    Q_PROPERTY(QColor color READ color WRITE setColor NOTIFY colorChanged FINAL)
public:
    /**
     * @private
     */
    Icon();

    /**
     * @brief create
     * @param QQmlEngine *p_engine
     * @details Static method for creating both visual and object instance of the object
     * @return Icon *
     */
    static Icon *create(QQmlEngine *p_engine);

    /**
     * @brief iconSource
     * @details Getter-method for current used icon
     * @return QUrl of current icon
     */
    QUrl iconSource() const;
    /**
     * @brief setIconSource
     * @param QUrl newIconSource
     * @details Setter-method to change current icon
     */
    void setIconSource(const QUrl &newIconSource);

    /**
     * @brief color
     * @return const QColor
     * @details Getter-method of current used color
     */
    QColor color() const;

    /**
     * @brief setColor
     * @param QColor newColor
     * @details Setter-method to change color of the icon
     */
    void setColor(const QColor &newColor);

signals:
    /**
     * @brief iconSourceChanged
     * @details Signal notifying that icon itself has changed
     */
    void iconSourceChanged();

    /**
     * @brief colorChanged
     * @details Signal notifying that color of the icon changed
     */
    void colorChanged();

private:
    /**
     * @private
     */
    QUrl m_iconSource;
    /**
     * @private
     */
    QColor m_color;
};

} // namespace UiLib

#endif // ICON_H
