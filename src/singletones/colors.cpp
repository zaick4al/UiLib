#include "colors.h"
#include <QQmlEngine>

namespace UiLib {

Colors &Colors::instance()
{
    static Colors colorsInstance;
    return colorsInstance;
}

Colors *Colors::create(QQmlEngine *p_qmlEngine, QJSEngine *p_jsEngine)
{
    return &UiColors;
}

Colors::Colors() : m_theme(ThemeOne),
    m_black(QColor::fromString("#080808")),
    m_darkest(QColor::fromString("#283D3B")),
    m_dark(QColor::fromString("#772E25")),
    m_neutral(QColor::fromString("#197278")),
    m_light(QColor::fromString("#C44536")),
    m_lightest(QColor::fromString("#EDDDD4")),
    m_white(QColor::fromString("#F2F2F2"))
{
    QQmlEngine::setObjectOwnership(this, QQmlEngine::CppOwnership);
    connect(this, &Colors::themeChanged, this, [ = ]() {
        switch (theme()) {
        case ThemeOne:
            setDarkest(QColor::fromString("#283D3B"));
            setDark(QColor::fromString("#772E25"));
            setNeutral(QColor::fromString("#197278"));
            setLight(QColor::fromString("#C44536"));
            setLightest(QColor::fromString("#EDDDD4"));
            break;
        case ThemeTwo:
            setDarkest(QColor::fromString("#202030"));
            setDark(QColor::fromString("#39304A"));
            setNeutral(QColor::fromString("#635C51"));
            setLight(QColor::fromString("#7D7461"));
            setLightest(QColor::fromString("#B0A990"));
            break;
        case ThemeThree:
            setDarkest(QColor::fromString("#38686A"));
            setDark(QColor::fromString("#187795"));
            setNeutral(QColor::fromString("#2589BD"));
            setLight(QColor::fromString("#A3B4A2"));
            setLightest(QColor::fromString("#CDC6AE"));
            break;
        case ThemeFour:
            setDarkest(QColor::fromString("#432818"));
            setDark(QColor::fromString("#6F1D1B"));
            setNeutral(QColor::fromString("#99582A"));
            setLight(QColor::fromString("#BB9457"));
            setLightest(QColor::fromString("#FFE6A7"));
            break;
        case ThemeFive:
            setDarkest(QColor::fromString("#A57548"));
            setDark(QColor::fromString("#5296A5"));
            setNeutral(QColor::fromString("#F6C28B"));
            setLight(QColor::fromString("#82DDF0"));
            setLightest(QColor::fromString("#FCD7AD"));
            break;
        case BlackAndWhite:
            setDarkest(QColor::fromString("#121212"));
            setDark(QColor::fromString("#777777"));
            setNeutral(QColor::fromString("#AAAAAA"));
            setLight(QColor::fromString("#BDBDBD"));
            setLightest(QColor::fromString("#D2D2D2"));
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

QColor Colors::black() const
{
    return m_black;
}

QColor Colors::darkest() const
{
    return m_darkest;
}


QColor Colors::dark() const
{
    return m_dark;
}

QColor Colors::neutral() const
{
    return m_neutral;
}

QColor Colors::light() const
{
    return m_light;
}

QColor Colors::lightest() const
{
    return m_lightest;
}

QColor Colors::white() const
{
    return m_white;
}

void Colors::setBlack(const QColor &p_black)
{
    if (m_black == p_black)
        return;
    m_black = p_black;
    emit blackChanged();
}

void Colors::setDarkest(const QColor &p_darkest)
{
    if (m_darkest == p_darkest)
        return;
    m_darkest = p_darkest;
    emit darkestChanged();
}

void Colors::setDark(const QColor &p_dark)
{
    if (m_dark == p_dark)
        return;
    m_dark = p_dark;
    emit darkChanged();
}

void Colors::setNeutral(const QColor &p_neutral)
{
    if (m_neutral == p_neutral)
        return;
    m_neutral = p_neutral;
    emit neutralChanged();
}

void Colors::setLight(const QColor &p_light)
{
    if (m_light == p_light)
        return;
    m_light = p_light;
    emit lightChanged();
}

void Colors::setLightest(const QColor &p_lightest)
{
    if (m_lightest == p_lightest)
        return;
    m_lightest = p_lightest;
    emit lightestChanged();
}

void Colors::setWhite(const QColor &p_white)
{
    if(m_white == p_white)
        return;
    m_white = p_white;
    emit whiteChanged();
}

} // namespace UiLib
