#include "colors.h"

namespace UiLib {

Colors &Colors::instance()
{
    static Colors colorsInstance;
    return colorsInstance;
}

Colors::Colors() : m_theme(ThemeOne),
    m_darkestColor(QColor::fromString("#283D3B")),
    m_darkColor(QColor::fromString("#772E25")),
    m_neutralColor(QColor::fromString("#197278")),
    m_lightColor(QColor::fromString("#C44536")),
    m_lightestColor(QColor::fromString("#EDDDD4"))
{
    connect(this, &Colors::themeChanged, this, [ = ]() {
        switch (theme()) {
        case ThemeOne:
            setDarkestColor(QColor::fromString("#283D3B"));
            setDarkColor(QColor::fromString("#772E25"));
            setNeutralColor(QColor::fromString("#197278"));
            setLightColor(QColor::fromString("#C44536"));
            setLightestColor(QColor::fromString("#EDDDD4"));
            break;
        case ThemeTwo:
            setDarkestColor(QColor::fromString("#202030"));
            setDarkColor(QColor::fromString("#39304A"));
            setNeutralColor(QColor::fromString("#635C51"));
            setLightColor(QColor::fromString("#7D7461"));
            setLightestColor(QColor::fromString("#B0A990"));
            break;
        case ThemeThree:
            setDarkestColor(QColor::fromString("#38686A"));
            setDarkColor(QColor::fromString("#187795"));
            setNeutralColor(QColor::fromString("#2589BD"));
            setLightColor(QColor::fromString("#A3B4A2"));
            setLightestColor(QColor::fromString("#CDC6AE"));
            break;
        case ThemeFour:
            setDarkestColor(QColor::fromString("#432818"));
            setDarkColor(QColor::fromString("#6F1D1B"));
            setNeutralColor(QColor::fromString("#99582A"));
            setLightColor(QColor::fromString("#BB9457"));
            setLightestColor(QColor::fromString("#FFE6A7"));
            break;
        case ThemeFive:
            setDarkestColor(QColor::fromString("#A57548"));
            setDarkColor(QColor::fromString("#5296A5"));
            setNeutralColor(QColor::fromString("#F6C28B"));
            setLightColor(QColor::fromString("#82DDF0"));
            setLightestColor(QColor::fromString("#FCD7AD"));
            break;
        };
    });
}

Colors::ColorTheme Colors::theme() const
{
    return m_theme;
}

void Colors::setTheme(ColorTheme p_theme)
{
    if (m_theme == p_theme)
        return;
    m_theme = p_theme;
    emit themeChanged();
}

QColor Colors::darkestColor() const
{
    return m_darkestColor;
}


QColor Colors::darkColor() const
{
    return m_darkColor;
}

QColor Colors::neutralColor() const
{
    return m_neutralColor;
}

QColor Colors::lightColor() const
{
    return m_lightColor;
}

QColor Colors::lightestColor() const
{
    return m_lightestColor;
}

void Colors::setDarkestColor(const QColor &p_darkestColor)
{
    if (m_darkestColor == p_darkestColor)
        return;
    m_darkestColor = p_darkestColor;
    emit darkestColorChanged();
}

void Colors::setDarkColor(const QColor &p_darkColor)
{
    if (m_darkColor == p_darkColor)
        return;
    m_darkColor = p_darkColor;
    emit darkColorChanged();
}

void Colors::setNeutralColor(const QColor &p_neutralColor)
{
    if (m_neutralColor == p_neutralColor)
        return;
    m_neutralColor = p_neutralColor;
    emit neutralColorChanged();
}

void Colors::setLightColor(const QColor &p_lightColor)
{
    if (m_lightColor == p_lightColor)
        return;
    m_lightColor = p_lightColor;
    emit lightColorChanged();
}

void Colors::setLightestColor(const QColor &p_lightestColor)
{
    if (m_lightestColor == p_lightestColor)
        return;
    m_lightestColor = p_lightestColor;
    emit lightestColorChanged();
}

} // namespace UiLib
