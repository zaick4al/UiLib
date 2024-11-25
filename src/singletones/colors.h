#ifndef UILIB_COLORS_H
#define UILIB_COLORS_H

#include <QQmlEngine>
#include <qquickitem.h>

#ifndef UiColors
#define UiColors UiLib::Colors::instance()
#endif //UiColors

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
    Q_PROPERTY(QColor black READ black NOTIFY blackChanged FINAL)
    Q_PROPERTY(QColor darkest READ darkest NOTIFY darkestChanged FINAL)
    Q_PROPERTY(QColor dark READ dark NOTIFY darkChanged FINAL)
    Q_PROPERTY(QColor neutral READ neutral NOTIFY neutralChanged FINAL)
    Q_PROPERTY(QColor light READ light NOTIFY lightChanged FINAL)
    Q_PROPERTY(QColor lightest READ lightest NOTIFY lightestChanged FINAL)
    Q_PROPERTY(QColor white READ white NOTIFY whiteChanged FINAL)
public:
    /**
     * @brief The ColorTheme enum
     * Enum contains color theme
     */
    enum ColorTheme {
        ThemeOne = 1,
        ThemeTwo = 2,
        ThemeThree = 3,
        ThemeFour = 4,
        ThemeFive = 5,
        BlackAndWhite = 6
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
     * @brief black
     * Getter for black color
     * @return QColor
     */
    QColor black() const;

    /**
     * @brief darkest
     * Getter for first color
     * @return QColor
     */
    QColor darkest() const;

    /**
     * @brief dark
     * Getter for second color
     * @return QColor
     */
    QColor dark() const;

    /**
     * @brief neutral
     * Getter for third color
     * @return QColor
     */
    QColor neutral() const;

    /**
     * @brief light
     * Getter for fourth color
     * @return QColor
     */
    QColor light() const;

    /**
     * @brief lightest
     * Getter for fifth color
     * @return QColor
     */
    QColor lightest() const;

    /**
     * @brief white
     * Getter for white color
     * @return QColor
     */
    QColor white() const;

signals:
    /**
     * @private
     */
    void themeChanged();

    /**
     * @private
     */
    void blackChanged();

    /**
     * @private
     */
    void darkestChanged();

    /**
     * @private
     */
    void darkChanged();

    /**
     * @private
     */
    void neutralChanged();

    /**
     * @private
     */
    void lightChanged();

    /**
     * @private
     */
    void lightestChanged();

    /**
     * @private
     */
    void whiteChanged();

protected:
    /**
     * @private
     */
    void setBlack(const QColor &p_black);

    /**
     * @private
     */
    void setDarkest(const QColor &p_darkest);

    /**
     * @private
     */
    void setDark(const QColor &p_dark);

    /**
     * @private
     */
    void setNeutral(const QColor &p_neutral);

    /**
     * @private
     */
    void setLight(const QColor &p_light);

    /**
     * @private
     */
    void setLightest(const QColor &p_lightest);

    /**
    * private
    */
    void setWhite(const QColor &p_white);

private:
    /**
     * @private
     */
    ColorTheme m_theme;

    /**
     * @private
     */
    QColor m_black;

    /**
     * @private
     */
    QColor m_darkest;

    /**
     * @private
     */
    QColor m_dark;

    /**
     * @private
     */
    QColor m_neutral;

    /**
     * @private
     */
    QColor m_light;

    /**
     * @private
     */
    QColor m_lightest;

    /**
     * @private
     */
    QColor m_white;
};

} // namespace UiLib

#endif // UILIB_COLORS_H
