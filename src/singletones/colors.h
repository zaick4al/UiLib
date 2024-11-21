#ifndef UILIB_COLORS_H
#define UILIB_COLORS_H

#include <QQmlEngine>
#include <qquickitem.h>

namespace UiLib {
/**
 * @brief The Colors class
 * QML singleton width colors and changeable themes
 */
class Colors : public QQuickItem
{
    Q_OBJECT
    QML_ELEMENT
    QML_SINGLETON
    /**
     * @brief The ColorTheme property
     * Property that concludes color theme and changes them
     * @accessors theme(), setTheme()
     */
    Q_PROPERTY(ColorTheme theme READ theme WRITE setTheme NOTIFY themeChanged FINAL)
    Q_PROPERTY(QColor darkestColor READ darkestColor NOTIFY darkestColorChanged FINAL)
    Q_PROPERTY(QColor darkColor READ darkColor NOTIFY darkColorChanged FINAL)
    Q_PROPERTY(QColor neutralColor READ neutralColor NOTIFY neutralColorChanged FINAL)
    Q_PROPERTY(QColor lightColor READ lightColor NOTIFY lightColorChanged FINAL)
    Q_PROPERTY(QColor lightestColor READ lightestColor NOTIFY lightestColorChanged FINAL)
public:
    /**
     * @brief The ColorTheme enum
     * Enum contains color theme
     */
    enum ColorTheme{
        ThemeOne = 1,
        ThemeTwo = 2,
        ThemeThree = 3,
        ThemeFour = 4,
        ThemeFive = 5
    };

    /**
     * @brief instance
     * Static method that calls for singleton instance from cpp
     * @return &Colors
     */
    static Colors &instance();

    /**
     * @brief Colors
     * Constructor
     */
    Colors();

    /**
     * @brief theme
     * Getter that returns current color theme
     * @return ColorTheme enum
     */
    ColorTheme theme() const;

    /**
     * @brief setTheme
     * Setter that sets current color theme
     * @param p_theme - ColorTheme enum
     */
    void setTheme(ColorTheme p_theme);

    /**
     * @brief darkestColor
     * Getter for first color
     * @return QColor
     */
    QColor darkestColor() const;

    /**
     * @brief darkColor
     * Getter for second color
     * @return QColor
     */
    QColor darkColor() const;

    /**
     * @brief neutralColor
     * Getter for third color
     * @return QColor
     */
    QColor neutralColor() const;

    /**
     * @brief lightColor
     * Getter for fourth color
     * @return QColor
     */
    QColor lightColor() const;

    /**
     * @brief lightestColor
     * Getter for fifth color
     * @return QColor
     */
    QColor lightestColor() const;


signals:
    void themeChanged();

    /**
     * @private
     */
    void darkestColorChanged();

    /**
     * @private
     */
    void darkColorChanged();

    /**
     * @private
     */
    void neutralColorChanged();

    /**
     * @private
     */
    void lightColorChanged();

    /**
     * @private
     */
    void lightestColorChanged();

protected:
    /**
     * @private
     */
    void setDarkestColor(const QColor &p_darkestColor);

    /**
     * @private
     */
    void setDarkColor(const QColor &p_darkColor);

    /**
     * @private
     */
    void setNeutralColor(const QColor &p_neutralColor);

    /**
     * @private
     */
    void setLightColor(const QColor &p_lightColor);

    /**
     * @private
     */
    void setLightestColor(const QColor &p_lightestColor);

private:
    /**
     * @private
     */
    ColorTheme m_theme;

    /**
     * @private
     */
    QColor m_darkestColor;

    /**
     * @private
     */
    QColor m_darkColor;

    /**
     * @private
     */
    QColor m_neutralColor;

    /**
     * @private
     */
    QColor m_lightColor;

    /**
     * @private
     */
    QColor m_lightestColor;
};

} // namespace UiLib

#endif // UILIB_COLORS_H
