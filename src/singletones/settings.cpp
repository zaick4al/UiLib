#include "settings.h"

namespace UiLib {

Common::Common(QObject *parent) : m_spacing(0),
    m_height(0),
    m_width(0),
    m_radius(0)
{}

qreal Common::spacing() const
{
    return m_spacing;
}

void Common::setSpacing(qreal p_spacing)
{
    if (qFuzzyCompare(m_spacing, p_spacing))
        return;
    m_spacing = p_spacing;
    emit spacingChanged();
}

qreal Common::height() const
{
    return m_height;
}

void Common::setHeight(qreal p_height)
{
    if (qFuzzyCompare(m_height, p_height))
        return;
    m_height = p_height;
    emit heightChanged();
}

qreal Common::width() const
{
    return m_width;
}

void Common::setWidth(qreal p_width)
{
    if (qFuzzyCompare(m_width, p_width))
        return;
    m_width = p_width;
    emit widthChanged();
}

qreal Common::radius() const
{
    return m_radius;
}

void Common::setRadius(qreal p_radius)
{
    if (qFuzzyCompare(m_radius, p_radius))
        return;
    m_radius = p_radius;
    emit radiusChanged();
}

qreal ButtonProp::height() const
{
    return m_height;
}

void ButtonProp::setHeight(qreal p_height)
{
    if (qFuzzyCompare(m_height, p_height))
        return;
    m_height = p_height;
    emit heightChanged();
}

qreal ButtonProp::width() const
{
    return m_width;
}

void ButtonProp::setWidth(qreal p_width)
{
    if (qFuzzyCompare(m_width, p_width))
        return;
    m_width = p_width;
    emit widthChanged();
}

qreal ButtonProp::radius() const
{
    return m_radius;
}

void ButtonProp::setRadius(qreal p_radius)
{
    if (qFuzzyCompare(m_radius, p_radius))
        return;
    m_radius = p_radius;
    emit radiusChanged();
}

ButtonProp::ButtonProp(QObject *parent)
{

}

Settings::Settings(QObject *parent)
    : QObject{parent},
      m_common(new Common(this)),
      m_buttonProp(new ButtonProp(this))
{
    QQmlEngine::setObjectOwnership(this, QQmlEngine::CppOwnership);
}

Settings *Settings::create(QQmlEngine *p_qmlEngine, QJSEngine *p_jsEngine)
{
    return &UiSettings;
}

Settings &Settings::instance()
{
    static Settings settings;
    return settings;
}

Common *Settings::common() const
{
    return m_common;
}

void Settings::setCommon(Common *p_common)
{
    if (m_common == p_common)
        return;
    m_common = p_common;
    emit commonChanged();
}

ButtonProp *Settings::buttonProp() const
{
    return m_buttonProp;
}

void Settings::setButtonProp(ButtonProp *p_buttonProp)
{
    if (m_buttonProp == p_buttonProp)
        return;
    m_buttonProp = p_buttonProp;
    emit buttonPropChanged();
}

} // namespace UiLib
